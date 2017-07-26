#include "binary_trees.h"
/**
  * binary_tree_insert_right - inserts a node as right-child of another node
  * @parent: pointer to the node to insert the right-child in
  * @value: the value to store in the new node
  * Return: returns pointer to the newnode of NULL if failed
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}
