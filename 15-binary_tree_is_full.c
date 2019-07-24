#include "binary_trees.h"
/**
 * binary_tree_is_full - full tree
 * @tree: binary tree
 * Return: 1 or 0
**/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		binary_tree_is_full(tree->left);
		binary_tree_is_full(tree->right);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);
	return (1);
}
