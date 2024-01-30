#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - Performs an in-order traversal on a binary tree.
 * @tree: Pointer to the root node of the binary tree.
 * @func: Pointer to a function to be applied to each node's value.
 *
 * Description: This function traverses a binary tree in in-order, starting
 * from the leftmost node, then visiting the root, and finally traversing
 * the right subtree. It applies the specified function to each node's value.
 * The function takes two parameters: a pointer to the current node and a
 * pointer to the specified function. If the tree is NULL or the function
 * pointer is NULL, the function does nothing.
 *
 * @tree: Pointer to the current node being processed.
 * @func: Pointer to a function that takes an integer value and returns void.
 */


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
