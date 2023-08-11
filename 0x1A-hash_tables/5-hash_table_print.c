#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: a pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, print_flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				if (print_flag == 1)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				print_flag = 1;
				ht->array[i] = ht->array[i]->next;
			}
		}
	}
	printf("}\n");
}
