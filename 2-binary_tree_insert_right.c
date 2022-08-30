#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * of another node (parent)
 * @parent: pointer to the node to insert the right-child in
 * @value: value to fill in the new (right) node
 * Return: a pointer to the new right-child node or NULL if failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newright;

	if (!parent)
		return (NULL);
	newright = binary_tree_node(parent, value);
	if (!newright)
		return (NULL);
	newright->right = parent->right;
	if (newright->right != NULL)
		newright->right->parent = newright;
	parent->right = newright;
	return (newright);
}
