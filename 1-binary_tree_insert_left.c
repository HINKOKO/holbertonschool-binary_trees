#include "binary_trees.h"

/**
 * binary_tree_t - inserts a fresh node as the left child
 * of another node
 * @parent: pointer to the node to insert a left-child in
 * @value: value to store in new node
 * Return: a pointer to new node or NULL if failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newchild;

	if (!parent)
		return (NULL);
	newchild = binary_tree_node(parent, value);
	if (!newchild)
		return (NULL);
	newchild->left = parent->left;
	if (newchild->left != NULL)
		newchild->left->parent = newchild;
	parent->left = newchild;
	return (newchild);
}
