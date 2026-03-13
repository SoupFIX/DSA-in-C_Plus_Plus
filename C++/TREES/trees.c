#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *root = NULL;
// creation of BST
struct node *create(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->left = NULL;
    n->right = NULL;
    return n;
}
// insertion in BST
struct node *insert(int val, struct node *root)
{
    if (root == NULL)
    {
        return create(val);
    }
    else if (val < (root->data))
    {
        root->left = insert(val, root->left);
    }
    else
    {
        root->right = insert(val, root->right);
    }
    return root;
}
// deleting the elements
void free_nodes(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    free_nodes(root->left);
    free_nodes(root->right);
    free(root);
}
// traversing
void print(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    print(root->left);
    printf("%d\t", root->data);
    print(root->right);
}
int main()
{
    struct node *root = NULL;
    root = insert(5, root);
    root = insert(6, root);
    root = insert(7, root);
    root = insert(3, root);
    root = insert(9, root);
    print(root);
    free_nodes(root);
}