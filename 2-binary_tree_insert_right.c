#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to the parent node where the new node will be inserted.
 * @value: Value to be stored in the new node.
 *
 * Return: Pointer to the newly inserted node, or NULL on failure or if
 *         the parent is NULL.
 *
 * This function creates a new node with the given value and inserts it as
 * the right child of the specified parent node. If memory allocation fails
 * or if the parent is NULL, it returns NULL. If the parent already has a
 * right child, the new node takes its place, and the old right child becomes
 * the right child of the new node.
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
	}

	parent->right = node;

	return (node);
}
