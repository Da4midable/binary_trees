#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a new node for a binary tree.
 * @parent: Pointer to the parent node of the new node.
 * @value: Value to be stored in the new node.
 *
 * Return: Pointer to the newly created node, or NULL on failure.
 *
 * This function allocates memory for a new node in a binary tree,
 * initializes its parent, value, left, and right pointers, and returns
 * a pointer to the created node. If memory allocation fails, it returns
 * NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = malloc(sizeof(binary_tree_t));

	if (root == NULL)
		return (NULL);

	root->parent = parent;
	root->n = value;
	root->right = NULL;
	root->left = NULL;

	return (root);
}
