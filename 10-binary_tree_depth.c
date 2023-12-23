#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		d = binary_tree_depth(tree->parent) + 1;

	return (d);
}
