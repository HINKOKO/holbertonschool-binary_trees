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

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * in a binary tree
 * @tree: pointer to the root node of tree to count number of nodes
 * Return: 0 when tree is null or returns the number
 * of nodes matching our research's criteria
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	return (left + 1 + right);
}
