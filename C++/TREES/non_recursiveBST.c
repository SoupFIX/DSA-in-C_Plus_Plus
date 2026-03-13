#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
// to create the node
struct node *create(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    n->left = NULL;
    n->right = NULL;
    return n;
}
// to insert the node
struct node *insert(struct node *root, int val)
{
    struct node *nd = create(val);
    if (root == NULL)
    {
        return nd;
    }
    struct node *par = NULL;
    struct node *curr = root;
    while (curr != NULL)
    {
        par = curr;
        if (val < curr->data)
        {
            curr = curr->left;
        }
        else if (val > curr->data)
        {
            curr = curr->right;
        }
        else
        {
            free(nd);
            return root;
        }
    }
    if (par == NULL)
    {
        return nd;
    }
    if (val < par->data)
    {
        par->left = nd;
    }
    else
    {
        par->right = nd;
    }
    return root;
}
struct node *delete(struct node *root, int val)
{
    if (root == NULL)
    {
        return root;
    }
    struct node *par = NULL;
    struct node *curr = root;
    // find the node
    while (curr != NULL && curr->data != val)
    {
        par = curr;
        if (curr->data > val)
        {
            curr = curr->left;
        }
        else
        {
            curr = curr->right;
        }
    }
    if (curr == NULL)
    {
        printf("element not found!");
        return root;
    }
    // leaf node
    if (curr->left == NULL && curr->right == NULL)
    {
        if (par == NULL)
        { // deleting the root
            free(root);
            return NULL;
        }
        if (par->left == curr)
        {
            par->left = NULL;
        }
        else
        {
            par->right = NULL;
        }
        free(curr);
    }
}
// preorder traversal
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int main()
{
    struct node *root = NULL;
    int val;
    int n;
    printf("Enter the number of nodes to be inserted : ");
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value : ");
        scanf_s("%d", &val);
        root = insert(root, val);
    }
    // print it
    preorder(root);
    int s;
    printf("Enter the number to be deleted : ");
    scanf_s("%d", &s);
    delete(root, s);
}