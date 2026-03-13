#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
};
struct node *root = NULL;
struct node *create(int val)
{

    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->left = NULL;
    n->right = NULL;
    return n;
}
struct node *insert(struct node *root, int val)
{
    if (root == NULL)
    {
        return create(val);
    }
    if (val < (root->data))
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}
void print(struct node *root)
{
    if (root == NULL)
    {

        return;
    }
    print(root->left);
    print(root->right);
    printf("%d \n", root->data);
}
int main()
{
    root = insert(root, 6);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 7);
    root = insert(root, 9);
    print(root);
    return 0;
}