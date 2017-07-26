#include "binary_trees.h"
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

	left = custom_binary_height(tree->left);
	right = custom_binary_height(tree->right);
	balance_factor = left - right;
	return (balance_factor);
}
/**
  * custom_binary_height - finds height of tree and treats one node height as 1
  * @tree: pointer to root node of the tree to measure
  * Return: 1 if one node and height for other nodes
  */
int custom_binary_height(const binary_tree_t *tree)
{
	int l, r;

	l = 0;
	r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	l = custom_binary_height(tree->left);
	r = custom_binary_height(tree->right);
	if (l > r)
		return (l + 1);
	else
		return (r + 1);


}
