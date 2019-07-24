#include "binary_trees.h"
/**
 * left - number of nodes
 * @tree: binary tree
 * Return: left nodes
**/
int left(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	left(tree->left);
	left(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left == NULL)
		return (0);
	return (left(tree->left) + 1);
}
/**
 * right - number of nodes
 * @tree: binary tree
 * Return: right nodes
**/
int right(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	right(tree->left);
	right(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->right == NULL)
		return (0);
	return (right(tree->right) + 1);
}
/**
 * binary_tree_balance - balances
 * @tree: binary tree
 * Return: the balance
**/
int binary_tree_balance(const binary_tree_t *tree)
{
	int a = 0, b = 0;

	a = left(tree);
	b = right(tree);
	return (a * b);
}
