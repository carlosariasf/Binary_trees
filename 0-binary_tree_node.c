#include "binary_trees.h"
/**
 * binary_tree_node - Create node
 * @parent: Pointer to parent
 * @value: value of node
 * Return: Pointer to new node
**/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
