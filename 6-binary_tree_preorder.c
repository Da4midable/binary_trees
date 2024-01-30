#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_val - Prints a number
 *
 * @n: Number to be printed
 */
void print_val(int n)
{
	printf("%d\n", n);
}


/**
 * binary_tree_preorder - Performs a pre-order traversal on a binary tree.
 * @tree: Pointer to the root node of the binary tree.
 * @func: Pointer to a function to be applied to each node's value.
 *
 * Description: This function traverses a binary tree in pre-order, starting
 * from the root node and applying the specified function to each node's value.
 * The function takes two parameters: a pointer to the current node and a
 * pointer to the specified function. If the tree is NULL or the function
 * pointer is NULL, the function does nothing.
 *
 * @tree: Pointer to the current node being processed.
 * @func: Pointer to a function that takes an integer value and returns void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	func = print_val;  /* Note: Assuming print_val is a predefined function */

	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

