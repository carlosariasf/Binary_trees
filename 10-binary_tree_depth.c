#include "binary_trees.h"
/**
 * binary_tree_depth - Create node
 * @tree: Pointer to parent
 * Return: Pointer to new node
**/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
