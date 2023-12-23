#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
    int lnum = 0;
    int rnum = 0;

    if (!tree)
        return (0);

    if ((!tree->left && tree->right) || (tree->left && !tree->right))
        return (0);
    
    if (tree->left == NULL && tree->right == NULL)
        return (1);
    
    lnum = binary_tree_is_full(tree->left);
    rnum = binary_tree_is_full(tree->right);

    if ((lnum == 0 && rnum == 1) || (lnum == 1 && rnum == 0))
        return (0);

    return (1);
}
