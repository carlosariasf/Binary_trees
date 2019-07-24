#include "binary_trees.h"
/**
 * binary_tree_uncle - search the uncle
 * @node: the node
 * Return: the uncle
**/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent->parent)
		return (NULL);
	if (node->parent->parent->left == NULL ||
	node->parent->parent->right == NULL)
		return (NULL);
	if (node->parent->parent->left->n == node->parent->n)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
