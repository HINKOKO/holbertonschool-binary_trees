#include "binary_trees.h"

/**
 * count_nodes - calculates the number of nodes in tree
 * @tree: pointer to the tree we want to count the nodes
 * Return: number of nodes, or 0 if tree is null
 */

int count_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}

/**
 * check_comp - helper function for checking the "completeness" of a tree
 * @tree: pointer to the tree to check
 * @index: index of node to check
 * @count: number of nodes in tree
 * Return: 1 is true, binary tree complete, 0 otherwise
 */

int check_comp(const binary_tree_t *tree, int index, int count)
{
	if (!tree)
		return (1);
	if (index >= count)
		return (0);

	return (check_comp(tree->left, 2 * index + 1, count) &&
			check_comp(tree->right, 2 * index + 2, count));
}

/**
 * binary_tree_is_complete - checks if a binary is complete
 * @tree: pointer to the root node of tree to check
 * Return: 0 when complete or tree Null, or 1 if it's not complete
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int count;

	if (tree == NULL)
		return (0);
	count = count_nodes(tree);

	return (check_comp(tree, 0, count));
}
