#include "binary_trees.h"
/**
 * binary_tree_height = Create node
 * @parent: Pointer to parent
 * @value: value of node
 * Return: Pointer to new node
**/
int left(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	left(tree->left);
	left(tree->right);
	if (tree->parent == NULL && (tree->left == NULL || tree->right == NULL))
		return (0);
        if (tree->left == NULL && tree->right == NULL)
                return (0);
	if (tree->left == NULL)
		return (0);
	return (left(tree->left) + 1);
}

int right(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
	right(tree->left);
	right(tree->right);
        if (tree->parent == NULL && (tree->left == NULL || tree->right == NULL))
                return (0);
	if (tree->parent == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->right == NULL)
		return (0);
	return (right(tree->right) + 1);
}

int binary_tree_is_full(const binary_tree_t *tree)
{
	int a = 0, b = 0;
	a = left(tree);
	b = right(tree);
	if (a == b)
		return (1);
	return (0);
}
