#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_h = 0;
    size_t right_h = 0;

    if (!tree)
        return(0);

    if (tree->left)
        left_h = binary_tree_height(tree->left) + 1;

    if (tree->right)
        right_h = binary_tree_height(tree->right) + 1;

    if (right_h > left_h)
        return (right_h);

    return (left_h);
}
