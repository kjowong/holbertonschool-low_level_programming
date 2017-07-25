#include "binary_trees.h"
#include "10-binary_tree_depth.c"
/**
 * node_exists - checks if node exists in a tree
 * @tree: pointer to the root of the tree or sub-tree
 * @node: pointer to the node we're looking for
 * Return: 1 if exists, 0 if doesn't
 */
int node_exists(const binary_tree_t *tree, const binary_tree_t *node)
{
	if (!tree || !node)
		return (0);
	if (tree == node)
		return (1);
	return (node_exists(tree->left, node) || node_exists(tree->right, node));
}
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the uncle node, if node has no sibling, return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t df, ds;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *) first);
	df = binary_tree_depth(first);
	ds = binary_tree_depth(second);
	if (df <= ds)
	{
		while (first != NULL)
		{
			if (node_exists(first, second))
				return ((binary_tree_t *)first);
			first = first->parent;
		}
	}
	else
	{
		while (second != NULL)
		{
			if (node_exists(second, first))
				return ((binary_tree_t *)second);
			second = second->parent;
		}
	}
	return (NULL);
}
