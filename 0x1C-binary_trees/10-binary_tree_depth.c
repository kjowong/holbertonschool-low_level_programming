#include "binary_trees.h"
/**
  * binary_tree_depth - measures the depth of a node in a binary tree
  * @node: pointer to the node to measure the depth of
  * Return: 0 if tree is NULL, otherwise the depth
  */
size_t binary_tree_depth(const binary_tree_t *node)
{

	size_t depth;

	depth = 0;

	if (node && node->parent == NULL)
		return (0);
	depth = (binary_tree_depth(node->parent) + 1);
	return (depth);
}
