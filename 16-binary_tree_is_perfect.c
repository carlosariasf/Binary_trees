#include "binary_trees.h"
/**
 * binary_tree_depth - Create node
 * @tree: Pointer to parent
 * Return: Pointer to new node
**/
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}
/**
 *
 *
 *
 */
int check_is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);
	if (tree->left == NULL || tree->right == NULL) 
		return (0);
	return (check_is_perfect(tree->left, d, level+1) &&
		check_is_perfect(tree->right, d, level+1));
}
/*inary_tree_is_full - full tree
 * @tree: binary tree
 * Return: 1 or 0
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d, level;

	level = 0;
	d = depth(tree);
	return (check_is_perfect(tree, d, level));
}
