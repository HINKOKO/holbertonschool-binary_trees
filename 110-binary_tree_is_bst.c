#include "binary_trees.h"

/**
 * help_bst - helper function for performing
 * a checking on a tree with binary_tree_is_bst
 * @tree: pointer to root node of tree
 * @max: maximal limit, or max bound of checked value in nodes
 * @min: minimal limit
 * Return: 0 if not bst, 1 otherwise
 */

int help_bst(const binary_tree_t *tree, int min, int max)
{
	/* an empty tree is BST */
	if (!tree)
		return (1);
	/* false if the pointed node violates the min/max constraint */
	if (tree->n < min || tree->n > max)
		return (0);
	/* otherwise, go for recursion, check subtrees recursively */
	/* and tighten min/max constraint according to side */
	return (help_bst(tree->left, min, tree->n - 1) &&
			help_bst(tree->right, tree->n + 1, max));
	/* do -1 and +1 for allowing only distinct values */
}

/**
 * binary_tree_is_bst - checks if BT is a valid Binary_search_tree
 * @tree: pointer to root node of tree
 * Return: 1 if tree is a valid BST, 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (help_bst(tree, INT_MIN, INT_MAX));
}
