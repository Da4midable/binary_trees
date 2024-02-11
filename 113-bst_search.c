#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a Binary Search Tree.
 * @tree: Pointer to the root node of the BST to search.
 * @value: Value to search for.
 *
 * Description: This function searches for a value in a Binary Search Tree.
 * It starts at the root and moves either to left or right child depending on
 * whether the value is less than or greater than the current node's value,
 * respectively. If value is found, it returns a pointer to the node containing
 * the value. If the value is not found or the tree is NULL, it returns NULL.
 *
 * Return: Pointer to the node containing value, or NULL if the value is not
 * found or the tree is NULL.
 */


bst_t *bst_search(const bst_t *tree, int value)
{
	while (tree)
	{
		if (value < tree->n)
			tree = tree->left;
		else if (value > tree->n)
			tree = tree->right;
		else
			return ((bst_t *)tree);
	}

	return (NULL);
}
