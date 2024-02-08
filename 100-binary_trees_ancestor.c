#include "binary_trees.h"

/**
 * binary_tree_is_ancestor - Checks if a node is an ancestor of another node
 * @ancestor: Pointer to the potential ancestor node
 * @node: Pointer to the node to check for ancestry
 *
 * Return: 1 if @ancestor is an ancestor of @node, 0 otherwise
 */

int binary_tree_is_ancestor(const binary_tree_t *ancestor,
								const binary_tree_t *node)
{
	while (node)
	{
		if (node == ancestor)
			return (1);
		node = node->parent;
	}
	return (0);
}


/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor, or NULL if not found
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
										const binary_tree_t *second)
{
	binary_tree_t *ancestor;

	if (!first || !second)
		return (NULL);

	ancestor = (binary_tree_t *)first;
	while (ancestor)
	{
		if (binary_tree_is_ancestor(ancestor, second))
			return (ancestor);
		ancestor = ancestor->parent;
	}

	return (NULL);
}
