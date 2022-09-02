#include "binary_trees.h"
/**
 * min_value - helper function to find minimum value
 * in a non-empty BST, note that we use it on "parts"
 * an entire BST
 * @root: pointer to root node of BST we want to look into
 * Return: the node with minimum key value found in the BST
 */

bst_t *min_value(bst_t *root)
{
	bst_t *curr = root;

	while (curr && curr->left != NULL)
		curr = curr->left;
	return (curr);
}

/**
 * bst_remove - removes a node from a BST
 * @root: pointer to root node of BST in which we will
 * remove a node
 * @value: value of the node to be removed
 * Return: The new root node of the BST
 * after having removed the desired value
 */

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *tmp;

	if (!root)
		return (root);
	/* base case */
	/* Value is lower than root value, so it stands in right sub-tree */
	if (value < root->n)
		root->left = bst_remove(root->left, value);
	/* else it stands on right subtree */
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	/* else the key is same as root key, and this is the node */
	/* that has to be deleted */
	else
	{
		tmp = root;
		/* only one child or no child conditions */
		if (tmp->left == NULL)
		{
			tmp = root->right;
			free(root);
			return (tmp);
		}
		else if (tmp->right == NULL)
		{
			tmp = tmp->left;
			free(root);
			return (tmp);
		}
		/* node with two children's case, get the inorder successor */
		tmp = min_value(root->right);
		/* copy inorder successor data in this node */
		root->n = tmp->n;
		/* Delete inorder successor */
		root->right = bst_remove(root->right, tmp->n);
	}
	return (root);
}
