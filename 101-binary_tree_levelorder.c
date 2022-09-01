#include "binary_trees.h"

/**
 * level_height - computes the height of the tree
 * @tree: pointer to the root node of the tree
 * Return: the height found, -1 if failure
 */

int level_height(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (!tree)
		return (1);
	lheight = level_height(tree->left);
	rheight = level_height(tree->right);
	if (lheight > rheight)
		return (lheight + 1);
	return (rheight + 1);
}

/**
 * current_level - helper function to prints the node/tree value
 * at each level
 * @tree: pointer to root node of tree
 * @level: "floor" level of tree
 */

void current_level(const binary_tree_t *tree, int level)
{
	if (!tree)
		return;

	if (level == 0)
		printf("n=%d\n", tree->n);
	else
	{
		current_level(tree->left, level - 1);
		current_level(tree->right, level - 1);
	}
}
/**
 * binary_tree_levelorder - goes through a binary tree using level-order
 * traversal
 * @tree: pointer to the root node of tree to traverse
 * @func: pointer to a function to call for each node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h, i;

	if (!tree || !func)
		return;

	func(tree->n);
	h = level_height(tree);
	for (i = 1; i <= h; i++)
		current_level(tree, i);
}
