#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0;
    size_t right_size = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_size = binary_tree_size(tree->left);

	if (tree->right)
		right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
