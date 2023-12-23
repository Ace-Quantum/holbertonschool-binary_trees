#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *gramps = NULL;

    if (!node || !node->parent || !node->parent->parent)
        return (0);
        
    gramps = node->parent->parent;

    if (!gramps->left || !gramps->right)
        return (0);

    if (gramps->left->n == node->parent->n)
        return (gramps->right);
    
    return (gramps->left);
}
