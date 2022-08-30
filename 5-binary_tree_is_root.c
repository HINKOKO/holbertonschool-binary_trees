#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is root
 * @node: pointer to the node to check
 * Return: 0 if node is NULL or not root,
 * return 1 if pointed node is a root one
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left && node->right && !node->parent)
		return (1);
	return (0);
}
