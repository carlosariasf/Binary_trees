#include "binary_trees.h"
/**
 * binary_tree_depth - Create node
 * @tree: Pointer to parent
 * Return: Pointer to new node
**/
size_t binary_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + binary_depth(tree->parent));
}
/**
 * binary_tree_is_full - full tree
 * @tree: binary tree
 * Return: 1 or 0
**/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned int i = 0, j = 0;
	static size_t deep[1024], idx = 0, deep3 = 2, n_leaves = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		{
			deep[idx] += binary_depth(tree);
			idx++;
			for (j = 0; deep[j] != 0; j++ )
			{
				for (i = j + 1; deep[i] != 0; i++)
				{
					printf("%d %d\n", (int) deep[j], (int) deep[i]);
					if (deep[j] != deep[i])
						return (0);
				}
			}
			n_leaves += 1 + (binary_tree_is_perfect(tree->left)
				+ binary_tree_is_perfect(tree->right));
		}
	n_leaves = binary_tree_is_perfect(tree->left) + binary_tree_is_perfect(tree->right);

	if(n_leaves == deep3)
		return (1);

	return (deep3);
}
