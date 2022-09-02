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
	bst_t *new;

	if (tree)
	{
		if (*tree == NULL)
		{
			new = binary_tree_node(NULL, value);
			return (new);
		}
		new = *tree;
		while (new)
		{
			if (new->n == value)
				break;
			if (new->n > value)
			{
				if (!new->left)
				{
					new->left = binary_tree_node(new, value);
					return (new->left);
				}
				new = new->left;
			}
			else if (new->n < value)
			{
				if (!new->right)
				{
					new->right = binary_tree_node(new, value);
					return (new->right);
				}
				new = new->right;
			}
		}
	}
	return (NULL);
}
