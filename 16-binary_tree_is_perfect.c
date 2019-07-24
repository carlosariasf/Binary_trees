#include "binary_trees.h"
/**
 * left - count the left side of the tree
 * @tree: binary tree
 * Return: number of left nodes
**/
int left(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	left(tree->left);
	left(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (left(tree->left) + 1);
}
/**
 * right - count the right side of the tree
 * @tree: binary tree
 * Return: number of nodes of the right sides
**/
int right(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	right(tree->left);
	right(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (right(tree->right) + 1);
}
/**
 * binary_tree_is_perfect - perfect of the binary tree
 * @tree: binary tree
 * Return: 1 or 0
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int a = 0, b = 0;

	a = left(tree);
	b = right(tree);
	if (a == b)
		return (1);
	return (0);
}
