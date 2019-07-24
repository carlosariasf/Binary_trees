#include "binary_trees.h"
/**
 * binary_tree_nodes - number of nodes
 * @tree: binary tree
 * Return: number of nodes
**/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_leaves = 0;

	if (!tree)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (1 + (binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right)));
	n_leaves = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (n_leaves);
}
