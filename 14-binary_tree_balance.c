#include "binary_trees.h"
/**
 * binary_height - Create node
 * @tree: Pointer to parent
 * Return: Pointer to new node
**/
size_t binary_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (max(binary_height(tree->left),
		binary_height(tree->right)) + 1);
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
	a = binary_height(tree->left);
	b = binary_height(tree->right);
	if (a - b < 0)
		return (a - b);
	if (a - b > 0)
		return (abs(a - b));
	return (0);
}
