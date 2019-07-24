#include "binary_trees.h"
/**
 * binary_tree_is_root - Create node
 * @node: Pointer to parent
 * Return: Pointer to new node
**/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
