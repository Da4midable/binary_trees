#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree.
 * @tree: Double pointer to the root node of the BST to insert the value into.
 * @value: Value to store in the node to be inserted.
 *
 * Description: This function creates a new node, initializes it with the given
 * value, and inserts it at the appropriate location in the Binary Search Tree.
 * If the address stored in tree is NULL, or value already exists in the tree,
 * the function returns NULL. Otherwise, it returns a pointer to the new node.
 * If the function fails to create a new node, it returns NULL.
 *
 * Return: Pointer to the created node, or NULL on failure or if the value
 * already exists in the tree.
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node = NULL, *cursor = NULL, *parent = NULL;

	if (!tree)
		return (NULL);

	cursor = *tree;

	while (cursor)
	{
		parent = cursor;
		if (value < cursor->n)
			cursor = cursor->left;
		else if (value > cursor->n)
			cursor = cursor->right;
		else
			return (NULL);
	}

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	if (!parent)
		*tree = node;

	else if (value < parent->n)
		parent->left = node;

	else
		parent->right = node;

	return (node);
}
