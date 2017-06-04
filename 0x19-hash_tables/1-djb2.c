#include "hash_tables.h"
/**
  * hash_djb2 - hash function that implements the djb2 algorithm
  * @str: takes in the string
  * Return: the hash
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	while (c = *str++)
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	return (hash);
}
