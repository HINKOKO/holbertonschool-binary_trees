#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: pointer to the root node of a tree to measure
 * Return: 0 if tree is NULL, or the height of the tree
 */

size_t height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_height = height(tree->left) + 1;
	if (tree->right)
		right_height = height(tree->right) + 1;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * help_avl - helper function for checking the AVL'ness of a tree
 * same logic of "helping function" for the BST checking work (function 110)
 * @tree: pointer to root node of tree to check
 * @min: lower bound
 * @max: max bound
 * Return: 0 when not AVL, otherwise 1
 */

int help_avl(const binary_tree_t *tree, int min, int max)
{
	int left_h, right_h;

	if (!tree)
		return (1);
	/* false if the pointed node violates the min/max constraint */
	if (tree->n < min || tree->n > max)
		return (0);

	left_h = tree->left ? height(tree->left) + 1 : 0;
	right_h = tree->right ? height(tree->right) + 1 : 0;
	if (abs(left_h - right_h) > 1)
		return (0);
	/* otherwise, go for recursion, check subtrees recursively */
	return (help_avl(tree->left, min, tree->n - 1) &&
			help_avl(tree->right, tree->n + 1, max));
	/* do -1 and +1 for allowing only distinct values */
}

/**
 * binary_tree_is_avl - check if binary tree is a valid AVL tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 for a valid AVL tree, 0 otherwise
 */

int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (help_avl(tree, INT_MIN, INT_MAX));
}
