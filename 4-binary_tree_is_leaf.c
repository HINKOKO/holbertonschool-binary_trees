#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if pointed node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	else if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
	return (binary_tree_is_leaf(node->right));
	return (binary_tree_is_leaf(node->right));
}
