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
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->data = val;
    root->left = NULL;
    root->right = NULL;
    return root;
}
struct node *insert(int val, struct node *root)
{
    if (root == NULL)
    {
        return create(val);
    }
    if (root->data > val)
    {
        root->left = insert(val, root->left);
    }
    else
    {
        root->right = insert(val, root->right);
    }
    return root;
}
int search_min(struct node *root)
{
    if (root == NULL)
    {
        printf("tree is empty!");
        return -1;
    }
    struct node *curr = root;
    struct node *pre = NULL;
    while (curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr->data;
}
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
    // root = insert(3, root);
    // root = insert(0, root);
    // root = insert(1, root);
    // root = insert(5, root);
    // root = insert(-123, root);
    int ans = search_min(root);
    printf("The min is : %d", ans);
    return 0;
}