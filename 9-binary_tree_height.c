#include "binary_trees.h"
/**
 * binary_tree_height - Create node
 * @tree: Pointer to parent
 * Return: Pointer to new node
**/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (max(binary_tree_height(tree->left),
		binary_tree_height(tree->right)) + 1);
}
