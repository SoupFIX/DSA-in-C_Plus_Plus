#include <stdio.h>
#include <stdlib.h>

// Definition of a linked list node
struct Node
{
    int data;
    struct Node *next;
};

// Function to merge two sorted linked lists
struct Node *mergeSortedLists(struct Node *l1, struct Node *l2)
{
    // Create a dummy node to start the merged list
    struct Node dummy;
    dummy.next = NULL;
    struct Node *current = &dummy;

    // Traverse both lists while neither is empty
    while (l1 != NULL && l2 != NULL)
    {
        if (l1->data <= l2->data)
        {
            current->next = l1; // Link l1 node to merged list
            l1 = l1->next;      // Move l1 pointer forward
        }
        else
        {
            current->next = l2; // Link l2 node to merged list
            l2 = l2->next;      // Move l2 pointer forward
        }
        current = current->next; // Move current pointer forward
    }

    // Attach remaining nodes (if any) from l1 or l2
    if (l1 != NULL)
    {
        current->next = l1;
    }
    else
    {
        current->next = l2;
    }

    // Return merged list head, which is next of dummy node
    return dummy.next;
}
