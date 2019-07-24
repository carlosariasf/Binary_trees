#include "binary_trees.h"
/**
 * binary_tree_sibling - search the siblinG
 * @node: the node
 * Return: the vallue of the sibling node
**/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp = node;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	tmp = node->parent;
	if (tmp->left->n == node->n)
		return (tmp->right);
	return (tmp->left);
}
