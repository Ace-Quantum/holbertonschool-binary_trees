#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height = 0;
    int right_height = 0;

    if (!tree)
        return (0);

    if (tree->left)
        left_height = (int)binary_tree_height(tree->left) + 1;
    
    if (tree->right)
        right_height = (int)binary_tree_height(tree->right) + 1;

    return (left_height - right_height);
}