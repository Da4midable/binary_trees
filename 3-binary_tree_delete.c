#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: Pointer to the root node of the tree to be deleted.
 *
 * This function recursively deletes an entire binary tree, including all
 * of its nodes. It follows a post-order traversal, first deleting the left
 * and right subtrees before freeing the memory of the current node. If the
 * input tree is NULL, the function does nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}
