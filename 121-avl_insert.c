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

/**
 * avl_insert - performs insertion in an AVL tree
 * @tree: double pointer to root node of AVL tree
 * @value: value to insert in AVL tree
 * Return: NULL if failure (handled in bst_insert)
 * or pointer to the created and inserted node
 */

avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *new;
	int balance = 0;

	new = bst_insert(tree, value);
	/* in bst_insert, the case tree Null insert node becomes */
	/* root node is handled */
	balance = binary_tree_balance(*tree);

	if (balance > 1 && value < new->left->n)
		return (binary_tree_rotate_right(new));
	if (balance < -1 && value > new->right->n)
		return (binary_tree_rotate_left(new));
	if (balance > 1 && value > new->left->n)
	{
		new->left = binary_tree_rotate_left(new->left);
		return (binary_tree_rotate_right(new));
	}
	if (balance < -1 && value < new->right->n)
	{
		new->right = binary_tree_rotate_right(new->right);
		return (binary_tree_rotate_left(new));
	}
	return (new);
}
