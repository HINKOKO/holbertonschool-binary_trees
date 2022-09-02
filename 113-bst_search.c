#include "binary_trees.h"

/**
 * bst_search - search for a value in a BST
 * @tree: pointer to root node of BST to look into
 * @value: value we're searching for in BST
 * Return: a pointer to the node containing a value equals to value
 * or NULL if tree is Null or no value found
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)tree);
	if (tree->n > value)
		return (bst_search(tree->left, value));
	else
		return (bst_search(tree->right, value));
}
