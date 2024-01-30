#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_postorder - Implements postorder traversal of a binary tree
 * @tree: Pointer to the root node of the binary tree.
 * @func: Pointer to a function to call for each node.
 *
 * Description: This function traverses a binary tree in post-order, starting
 * from the left subtree, then the right subtree, and finally visiting root.
 * The specified function is called for each node's value.
 * If the tree is NULL or the function pointer is NULL, function does nothing.
 *
 * @tree: Pointer to the current node being processed.
 * @func: Pointer to a function that takes an integer value and returns void.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
