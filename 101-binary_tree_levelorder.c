#include "binary_trees.h"

/**
 * binary_tree_levelorder - Performs a level-order traversal on a binary tree
 * @tree: Pointer to the root node of the binary tree
 * @func: Pointer to a function to be applied to each node's value
 *
 * Description: This function traverses a binary tree in level-order, also
 * known as breadth-first traversal, starting from the root node and moving
 * level by level. It applies the specified function to each node's value.
 * The function takes two parameters: a pointer to the current node and a
 * pointer to the specified function. If the tree or the function pointer
 * is NULL, the function does nothing.
 *
 * @tree: Pointer to the current node being processed.
 * @func: Pointer to a function that takes an integer value and returns void.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;



	if (tree)
	{

		if (!tree->parent)
			func(tree->n);

		if (tree->left)
			func(tree->left->n);

		if (tree->right)
			func(tree->right->n);

		binary_tree_levelorder(tree->left, func);
		binary_tree_levelorder(tree->right, func);
	}

}
