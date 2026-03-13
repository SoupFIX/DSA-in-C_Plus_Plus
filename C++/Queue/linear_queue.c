#include <stdio.h>
int front = 0, rear = -1;
void enqueue(int v, int n, int ar[])
{
    if (rear == (n - 1))
    {
        printf("Queue is Full !");
    }
    rear++;
    ar[rear] = v;
}
int dequeue(int ar[])
{
    if (front > rear)
    {
        printf("Queue is already empty!");
    }
    int f = ar[front];
    front++;
    return f;
}
int peek(int ar[])
{
    if (rear == -1 || front > rear)
    {
        printf("Queue is empty !");
    }
    return ar[front];
}
void display(int arr[])
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    int n;
    printf("Enter the size of the queue : ");
    scanf_s("%d", &n);
    int arr[n];
    enqueue(12, n, arr);
    enqueue(2, n, arr);
    enqueue(14, n, arr);
    enqueue(67, n, arr);
    enqueue(78, n, arr);
    enqueue(78, n, arr);
    display(arr);
    printf("\n");
    int x = peek(arr);
    printf("%d", x);
    return 0;
}