#include <iostream>
#include <vector>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
// static int i = -1;
node *build_tree(vector<int> a, int &i)
{
    if (i >= a.size())
    {
        return NULL;
    }
    if (a[i] == -1)
    {
        return NULL;
    }
    node *root = new node(a[i]);
    i++;
    root->left = build_tree(a, i);
    i++;
    root->right = build_tree(a, i);
    return root;
}
void traverse(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    traverse(root->left);
    traverse(root->right);
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    int i = 0;
    node *root = build_tree(a, i);
    traverse(root);
    return 0;
}