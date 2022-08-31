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
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of a tree to measure
 * Return: 0 if tree is NULL, or the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_is_perfect - check if a binary is perfect
 * @tree: pointer to root node of tree to check the perfectness
 * Return: 0 if it's not, 1 if it is a perfect tree
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (!tree)
		return (0);
	left = tree->left;
	right = tree->right;
	if (binary_tree_is_leaf(tree))
		return (1);
	if (binary_tree_height(left) == binary_tree_height(right))
		return (1);
	return (0);
}
