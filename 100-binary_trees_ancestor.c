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
	binary_tree_t *traveller;

	if (first == NULL || second == NULL)
		return (NULL);

	traveller = (binary_tree_t *)second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = traveller;
		first = first->parent;
	}
	return (NULL);
}
