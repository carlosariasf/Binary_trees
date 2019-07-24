#include "binary_trees.h"
/**
 * binary_tree_uncle - search the uncle
 * @node: the node
 * Return: the uncle
**/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp = node;

	if (!node)
		return (0);
	if (!node->parent->parent)
		return (0);
	tmp = node->parent->parent;
	if (tmp->left->n == node->parent->n)
		return (tmp->right);
	return (tmp->left);
}
