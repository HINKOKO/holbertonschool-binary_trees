#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right rotation
 * on binary tree
 * @tree: pointer to root node of tree we want to rotate
 * Return: a pointer to the new root node once tree has been
 * rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp, *pivot;

	temp = tree->parent;
	pivot = tree->left;
	tree->left = pivot->right;
	if (pivot->right)
		pivot->right->parent = tree;
	pivot->right = tree;
	tree->parent = pivot;
	pivot->parent = temp;
	/* update parent down link */
	if (temp)
	{
		if (temp->left == tree)
			temp->left = pivot;
		else
			temp->right = pivot;
	}
	return (pivot);
}
