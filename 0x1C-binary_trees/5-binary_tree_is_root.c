#include "binary_trees.h"
/**
  * binary_tree_is_root - checks if an given node is a root
  * @node: a pointer to the node to check
  * Return: 1 if node is root, 0 otherwise
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->right == NULL || node->left == NULL)
		return (0);
	return (1);
}

