#include "binary_trees.h"
bst_t *bst_insert(bst_t **tree, int value);

/**
 * array_to_bst - builds a BST from an array
 * @array: pointer to first element of array to be converted
 * @size: number of element of array
 * Return: returns a pointer to root node of created BST
 * or NULL on failure
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);
	return (root);
}
