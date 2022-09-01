#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the lowest common ancestor (LCA)
 * of first and second node. i.e. the deepest common nodes from the root
 * of first and second node
 * @first: first node choosen
 * @second: second node choosen
 * Return: NULL if no ancestor found, or a pointer to the LCA
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	binary_tree_t *ancestor, *oldy;

	oldy = second->parent;
	if (oldy == first)
		return (oldy);
	oldy = first->parent;
	if (oldy == second)
		return (oldy);
	ancestor = first->parent;
	while (first->parent != second->parent)
	{
		if (ancestor == second->parent)
			break;
		first = first->parent;
		second = second->parent;
	}
	return (ancestor);
}
