#include "holberton.h"
/**
  *
  *
  *
  */
char *_strcpy(char *dest, char *src)
{
	int i, c;

	c = 0;

	while (src[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		dest[i] = src[i];
	}
	return ((char *)dest);

}
