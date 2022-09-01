#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left rotation
 * on a binary tree
 * @tree: pointer to root node to the tree we want to rotate
 * Return: pointer to the new root node once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp, *pivot;

	temp = tree->parent;
	pivot = tree->right;
	tree->right = pivot->left;
	if (pivot->left)
		pivot->left->parent = tree;
	pivot->left = tree;
	tree->parent = pivot;
	pivot->parent = temp;
	/* parent down link */
	if (temp)
	{
		if (temp->left == tree)
			temp->left = pivot;
		else
			temp->right = pivot;
	}
	return (pivot);
}
