#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "12-binary_tree_leaves.c"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if it is, 0 if not, if tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t hl, hr;
	int l;

	hl = hr = 0;
	l = binary_tree_leaves(tree);
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left)
		hl = binary_tree_height(tree->left);
	if (tree->right)
		hr = binary_tree_height(tree->right);
	if (hl != hr)
		return (0);
	hl += 1;
	if (_pow_recursion(2, hl) == l)
		return (1);
	return (0);
}
