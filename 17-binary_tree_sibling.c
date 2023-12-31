#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (!node || !node->parent)
        return (0);

    if (!node->parent->left || !node->parent->right)
        return (0);
    
    if (node->parent->left->n == node->n)
        return (node->parent->right);
    
    return (node->parent->left);
}
