# C - Hash tables
This project is about a new concept in  __C__ programming language, a new sort of data structure called __Hash tables__.

## Genral
In this project, we were able to:
* Understand what is a hash function.
* Understand how do they work and how to use them.
* Know what is a collision and what are the main ways of dealing with collisions in the context of a hash table.

## Tasks
0. >>> ht = {}
* Write a function that creates a hash table.

	* Prototype: `hash_table_t *hash_table_create(unsigned long int size);`

1. djb2
* Write a hash function implementing the djb2 algorithm.

	* Prototype: `unsigned long int hash_djb2(const unsigned char *str);`

2. key -> index
* Write a function that gives you the index of a key.

	* Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`

3. >>> ht['betty'] = 'cool'
* Write a function that adds an element to the hash table.

	* Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`

4. >>> ht['betty']
* Write a function that retrieves a value associated with a key.

	* Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`

5. >>> print(ht)
* Write a function that prints a hash table.

	* Prototype: `void hash_table_print(const hash_table_t *ht);`

6. >>> del ht
* Write a function that deletes a hash table.

	* Prototype: `void hash_table_delete(hash_table_t *ht);`
