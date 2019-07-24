#include "binary_trees.h"
/**
 * binary_tree_insert_right - Create node
 * @parent: Pointer to parent
 * @value: value of node
 * Return: Pointer to new node
**/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *tmp = NULL;

	if (!parent)
		return (NULL);
	node = parent;
	if (node->right == NULL)
	{
		node->right = binary_tree_node(parent, value);
	}
	else
	{
		tmp = node->right;
		node->right = binary_tree_node(parent, value);
		tmp->parent = node->right;
		node->right->right = tmp;
	}

	return (node);
}
