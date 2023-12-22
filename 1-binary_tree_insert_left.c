#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode = malloc(sizeof(binary_tree_t));
    binary_tree_t *tempnode = NULL;

    if (parent == NULL)
        return(0);

    if (newnode == NULL)
        return(0);

    newnode->n = value;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->parent = parent;

    if (parent->left == NULL)
        parent->left = newnode;
    else
    {
        tempnode = parent->left;
        parent->left = newnode;
        newnode->left = tempnode;
        tempnode->parent = newnode;
    }

    return (newnode);
    
}
