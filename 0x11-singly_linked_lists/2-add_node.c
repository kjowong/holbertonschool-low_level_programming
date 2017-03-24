#include "lists.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: takes in a string
 * Return: i, string length
 */
int _strlen(const char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
  * add_node - function that adds a new node
  * @head: pointer to pointer
  * @str: takes in a string
  * Return: pointer to the head
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (*head);
}

