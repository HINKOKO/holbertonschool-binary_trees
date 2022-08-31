#include "binary_trees.h"

/**
 * binary_tree_size - measures th esize of a binary tree
 * @tree: pointer to the root node of tree to get the size of
 * Return: 0 if tree is Null, or the size of pointed tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
