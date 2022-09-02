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
	bst_t *browse;

	if (!tree)
		return (NULL);
	browse = (bst_t *)tree;
	if (browse->n > value)
		bst_search(browse->right, value);
	else if (browse->n < value)
		bst_search(browse->left, value);
	return (browse);
}
