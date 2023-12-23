#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
#include "11-binary_tree_size.c"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int sleft = 0;
    int sright = 0;

    if (!tree)
        return (0);
    
    if (tree->left)
        sleft = binary_tree_size(tree->left);
    
    if (tree->right)
        sright = binary_tree_size(tree->right);
    
    if (sleft != sright)
        return (0);

    return (1);
}
