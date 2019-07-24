#include "binary_trees.h"
/**
 * binary_tree_sibling - search the siblinG
 * @node: the node
 * Return: the vallue of the sibling node
**/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	if (node->parent->left->n == node->n)
		return (node->parent->right);
	return (node->parent->left);
}
