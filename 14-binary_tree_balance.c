#include "binary_trees.h"
/**
 * left - number of nodes
 * @tree: binary tree
 * Return: left nodes
**/
int left(const binary_tree_t *tree)
{
	int count = 0;

	if (!tree)
		return (count);
	count += 1 + left(tree->left);
	left(tree->right);

	return (count);
}
/**
 * right - number of nodes
 * @tree: binary tree
 * Return: right nodes
**/
int right(const binary_tree_t *tree)
{
	int count = 0;

	if (!tree)
		return (count);
	right(tree->left);
	count += 1 + right(tree->right);

	return (count);
}
/**
 * binary_tree_balance - balances
 * @tree: binary tree
 * Return: the balance
**/
int binary_tree_balance(const binary_tree_t *tree)
{
	int a = 0, b = 0;

	if (!tree)
		return (0);
	a = left(tree);
	b = right(tree);
	if (a - b < 0)
		return (a - b);
	if (a - b > 0)
		return (abs(a - b));
	return (0);
}
