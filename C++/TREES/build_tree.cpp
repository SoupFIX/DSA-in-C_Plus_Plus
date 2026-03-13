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
static int ind = -1;
node *build_tree(vector<int> pre_order)
{
    ind++;
    node *root = new node(pre_order[ind]);
    if (pre_order[ind] == -1)
    {
        return NULL;
    }
    root->left = build_tree(pre_order);  // left child;
    root->right = build_tree(pre_order); // right child;
    return root;
}
int main()
{
    vector<int> pre_order = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    node *root = build_tree(pre_order);
    cout << root->data << " ";
    cout << root->left->data << " ";
    cout << root->right->data << " ";
    cout << root->right->left->data << " ";
    return 0;
}