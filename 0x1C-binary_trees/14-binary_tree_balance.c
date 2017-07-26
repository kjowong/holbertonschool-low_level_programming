#include "binary_trees.h"
/**
  * binary_tree_balance - measures the balance factor of a binary tree
  * @tree: the pointer to the root node of the tree to measure the balance
  * factor of
  * Return: 0 if tree is NULL or the balance factor
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor, left, right;

	left = 0;
	right = 0;
	balance_factor = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	balance_factor = left - right;
	return (balance_factor);
}
