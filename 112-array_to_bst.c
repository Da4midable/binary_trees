#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array.
 * @array: Pointer to the first element of the array to be converted.
 * @size: Number of elements in the array.
 *
 * Description: This function builds a Binary Search Tree (BST) from an array.
 * It iterates over the array and inserts each element into the BST using the
 * bst_insert function. The BST is built in the order that elements appear in
 * the array. If the array contains duplicate values, they are ignored.
 *
 * Return: Pointer to the root node of the created BST, or NULL on failure.
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i = 0;
	int value;


	while (i < size)
	{
		value = array[i];
		bst_insert(&root, value);
		i++;
	}

	if (!root)
		return (NULL);

	return (root);
}
