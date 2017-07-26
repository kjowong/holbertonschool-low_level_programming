#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
  * binary_tree_balance - measures the balance factor of a binary tree
  * @tree: the pointer to the root node of the tree to measure the balance
  * factor of
  * Return: 0 if tree is NULL or the balance factor
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor;
	size_t left, right;

	left = 0;
	right = 0;
	balance_factor = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right = binary_tree_height(tree->right) + 1;
	balance_factor = left - right;
	return (balance_factor);
}
