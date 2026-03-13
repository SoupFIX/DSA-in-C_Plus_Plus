#include <stdio.h>
#include <stdlib.h>

// Define the structure for a tree node
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
};

// Helper function to create a new BST node
struct Node *newNode(int item)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// --- Iterative Insertion ---
// A non-recursive function to insert a new key in BST
struct Node *insertNode(struct Node *root, int key)
{
    // 1. Create the new node
    struct Node *nn = newNode(key);
    // 2. If tree is empty, return the new node as root
    if (root == NULL)
    {
        return nn;
    }
    struct Node *parent = NULL;
    struct Node *current = root;
    // 3. Traverse the tree to find the correct insertion point
    while (current != NULL)
    {
        parent = current; // Keep track of the parent
        if (key < current->key)
        {
            current = current->left;
        }
        else if (key > current->key)
        {
            current = current->right;
        }
        else
        {
            // Duplicate keys are not allowed
            printf("Key %d already exists.\n", key);
            free(nn);    // Free the new node
            return root; // Return original root
        }
    }
    // 4. Attach the new node to its parent
    if (key < parent->key)
    {
        parent->left = nn;
    }
    else
    {
        parent->right = nn;
    }
    return root;
}
// --- Iterative Deletion ---
// A non-recursive function to delete a key from BST
struct Node *deleteNode(struct Node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }
    struct Node *parent = NULL;
    struct Node *current = root;
    // 1. Find the node to be deleted and its parent
    while (current != NULL && current->key != key)
    {
        parent = current;
        if (key < current->key)
        {
            current = current->left;
        }
        else
        {
            current = current->right;
        }
    }
    // Key not found
    if (current == NULL)
    {
        printf("Key %d not found in the tree.\n", key);
        return root;
    }
    // --- Case 1: Node to be deleted is a leaf (no children) ---
    if (current->left == NULL && current->right == NULL)
    {
        // If it's the root node
        if (parent == NULL)
        {
            free(root);
            return NULL;
        }
        // Detach from parent
        if (parent->left == current)
        {
            parent->left = NULL;
        }
        else
        {
            parent->right = NULL;
        }
        free(current);
    }
    // --- Case 2: Node to be deleted has one child ---
    else if (current->left == NULL || current->right == NULL)
    {
        struct Node *child = (current->left != NULL) ? current->left : current->right;
        // If it's the root node
        if (parent == NULL)
        {
            free(root);
            return child; // The child becomes the new root
        }
        // Attach child to the parent
        if (parent->left == current)
        {
            parent->left = child;
        }
        else
        {
            parent->right = child;
        }
        free(current);
    }
    // --- Case 3: Node to be deleted has two children ---
    else
    {
        // Find the inorder successor (smallest node in the right subtree)
        struct Node *succParent = current;
        struct Node *successor = current->right;
        while (successor->left != NULL)
        {
            succParent = successor;
            successor = successor->left;
        }
        // Copy the successor's key to the current node
        current->key = successor->key;
        // Now, delete the successor. The successor is guaranteed
        // to have at most one (right) child.
        // Get the successor's (possible) right child
        struct Node *succChild = successor->right;
        // Detach successor from its parent
        if (succParent->left == successor)
        {
            succParent->left = succChild;
        }
        else
        {
            // This case happens if the successor was current->right
            succParent->right = succChild;
        }
        free(successor);
    }

    return root;
}

// --- Traversal (Recursive) ---
// A utility function to do inorder traversal of BST
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

// --- Main Driver Function ---
int main()
{
    struct Node *root = NULL;

    // --- Insertion ---
    printf("Inserting nodes: 50, 30, 70, 20, 40, 60, 80\n");
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 70);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 60);
    root = insertNode(root, 80);

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n\n");

    // --- Deletion ---

    // Case 1: Delete a leaf node (20)
    printf("Deleting leaf node 20\n");
    root = deleteNode(root, 20);
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n\n");

    // Case 2: Delete a node with one child (70)
    printf("Deleting node with one child 70\n");
    root = deleteNode(root, 70); // 80 will replace 70
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n\n");

    // Case 3: Delete a node with two children (50)
    printf("Deleting node with two children 50 (root)\n");
    root = deleteNode(root, 50); // 60 (inorder successor) will replace 50
    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    return 0;
}