#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
class tree
{
public:
    node *insert(int val, node *root)
    {
        if (root == NULL)
        {
            return new node(val);
        }
        if (val < root->data)
        {
            root->left = insert(val, root->left);
        }
        else
        {
            root->right = insert(val, root->right);
        }
        return root;
    }
    void print(node *root)
    {
        if (root == NULL)
        {
            return;
        }
        print(root->left);
        cout << root->data << " ";
        print(root->right);
    }
};
int main()
{
    tree t;
    node *root = NULL;
    root = t.insert(12, root);
    root = t.insert(1, root);
    root = t.insert(14, root);
    root = t.insert(16, root);
    root = t.insert(11, root);
    root = t.insert(19, root);
    t.print(root);
    return 0;
}