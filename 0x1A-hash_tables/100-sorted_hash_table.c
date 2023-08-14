#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 *
 * @size: the size of the shash table
 * Return: a pointer to newly created shash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sh_table;
	unsigned long int i;

	sh_table = malloc(sizeof(shash_table_t));
	if (sh_table == NULL)
		return (NULL);

	sh_table->size = size;
	sh_table->array = malloc(sizeof(shash_node_t *) * size);

	if (sh_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		sh_table->array[i] = NULL;

	sh_table->shead = sh_table->stail = NULL;

	return (sh_table);
}

/**
 * create_node - create a node to add in the shash table
 *
 * @key: a pointer to the key
 * @value: a pointer to the value associated with the key
 * Return: a pointer to the new node
 */

shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	if (!(node->key))
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (!(node->value))
	{
		free(node->value);
		free(node);
		return (NULL);
	}

	return (node);
}

/**
 * add_snode - add a sorted node
 *
 * @ht: a pointer to the shash table
 * @node: a pointer to the newly node
 */

void add_snode(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp;

	if (ht->shead == NULL)
	{
		node->snext = NULL;
		node->sprev = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, node->key) > 0)
	{
		node->snext = ht->shead;
		node->sprev = NULL;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		temp = ht->shead;
		while ((temp->snext) && strcmp(temp->snext->key, node->key) < 0)
			temp = temp->snext;
		node->snext = temp->snext;
		node->sprev = temp;
		if (!(temp->snext))
			ht->stail = node;
		else
			temp->snext->sprev = node;
		temp->snext = node;
	}
}


/**
 * shash_table_set - adds element to the sorted hash table
 *
 * @ht: a pointer to the shash table
 * @key: a pointer to the key
 * @value: a pointer to the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;
	unsigned long int idx;

	if (!ht || !key || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	new_node = create_node(key, value);

	if (!new_node)
		return (0);

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	add_snode(ht, new_node);

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 *
 * @ht: a pointer to the shash table
 * @key: a pointer to the key
 * Return: the value associated with the key
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;
	unsigned long int idx;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	temp = ht->shead;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->snext;
	}
	return (NULL);
}


/**
 * shash_table_print - prints a sorted hash table
 *
 * @ht: a pointer to the hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	int print_flag = 0;

	if (!ht)
		return;

	temp = ht->shead;
	printf("{");
	while (temp)
	{
		if (print_flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		print_flag = 1;
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints the shash table in reverse order
 *
 * @ht: a pointer to the shash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	int print_flag = 0;

	if (!ht)
		return;

	temp = ht->stail;
	printf("{");
	while (temp)
	{
		if (print_flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		print_flag = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 *
 * @ht: a pointer to the hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *temp;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
	}
	free(ht->array);
	free(head);
}
