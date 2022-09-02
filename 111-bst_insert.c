#include "binary_trees.h"

/**
 * bst_insert - performs insertion of a new node containing
 * value of "value" as data
 * @tree: double pointer to the root node of BST
 * @value: value to store in new node
 * Return: a pointer to the created and inserted node
 * or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *insert;

	if (tree)
	{
		if (!*tree)
		{
			*tree = binary_tree_node(NULL, value);
			return (*tree);
		}
		insert = *tree;
		while (insert)
		{
			if (insert->n == value)
				break;
			if (insert->n > value)
			{
				if (!insert->left)
				{
					insert->left = binary_tree_node(insert, value);
					return (insert->left);
				}
				insert = insert->left;
			}
			else if (insert->n < value)
			{
				if (!insert->right)
				{
					insert->right = binary_tree_node(insert, value);
					return (insert->right);
				}
				insert = insert->right;
			}
		}
	}
	return (NULL);
}
