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
void search(struct node *root, int item)
{
    struct node *par = NULL;
    struct node *curr = root;
    if (root == NULL)
    {
        printf("tree is empty!");
        return;
    }
    while (curr != NULL)
    {
        if (curr->data == item)
        {
            curr = root;
            printf("The curr node is : %d\n", curr->data);
            printf("it is the root node itself!");
            return;
        }
        par = curr;
        if (item < curr->data)
        {
            curr = curr->left;
            if (curr != NULL && curr->data == item)
            {
                printf("the node is : %d\t", curr->data);
                printf("the parent is : %d", par->data);
                return;
            }
        }
        else
        {
            curr = curr->right;
            if (curr != NULL && curr->data == item)
            {
                printf("the node is : %d\t", curr->data);
                printf("the parent is : %d", par->data);
                return;
            }
        }
    }
    if (curr == NULL)
    {
        printf("Node not found!");
        return;
    }
}
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
// inorder traversing
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
    search(root, 123);
    free_nodes(root);
}