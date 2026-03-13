#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *q = NULL;
// function to put elements to the front
void push_front(int v)
{
    struct node *nd = (struct node *)malloc(sizeof(struct node));
    nd->data = v;
    // firrst case when the list is empty
    if (head == NULL)
    {
        head = nd;
    }
    else
    {
        nd->next = head;
        head = nd;
    }
}
void insert_at_any(int n)
{
    // list_is_empty
    int pos = 0;
    int num = 0;
    printf("Enter the position : ");
    scanf_s("%d", &pos);
    printf("Enter the number : ");
    scanf_s("%d", &num);
    if (pos > (n + 1))
    {
        printf("NO YOU CANNOT INSERT ELEMENT !!\n");
        exit(1);
    }
    q = head;
    struct node *d = (struct node *)malloc(sizeof(struct node));
    d->data = num;
    // when list is empty
    if (head == NULL && pos == 1)
    {
        head = q = d;
        if (head != NULL && pos == 1)
        {
            head->next = d;
        }
    }
    // for inserting any when from position 2 to last-1
    else if (head != NULL && pos >= 2 && pos <= n)
    {
        // inserting at nth position
        for (int i = 1; i < pos - 1; i++)
        { // traversing the pointer to just pre of the point where we need to insert
            q = q->next;
            if (q == NULL)
            {
                printf("pos not found!");
            }
        }
        d->next = q->next;
        q->next = d;
        // head = d;
    }
    // for entering at last of the node
    else
    {
        struct node *w = head;
        while (w->next != NULL)
        {
            w = w->next;
            if (w == NULL)
            {
                exit(1);
            }
        }
        w->next = d;
    }
}
void print()
{
    struct node *t = head;
    while (t != NULL)
    {
        printf("%d\t", t->data);
        t = t->next;
    }
}
int main()
{
    int n, v;
    printf("Enter the size of n : ");
    scanf_s("%d", &n);
    // insert_at_any(45, n);
    // print();
    // exit(1);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the number : ");
        scanf_s("%d", &v);
        push_front(v);
    }
    // This is the case when the list is not empty.
    insert_at_any(n);
    print();
    return 0;
}