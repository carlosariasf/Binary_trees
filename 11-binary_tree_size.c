#include "binary_trees.h"
/**
 * binary_tree_size - Create node
 * @tree: Pointer to parent
 * Return: Pointer to new node
**/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r = 1;

	if (!tree)
		return (0);
	r += binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (r);
}
