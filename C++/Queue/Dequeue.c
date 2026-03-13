#include <stdio.h>
#define MAX 5

int deque[MAX];
int front = -1;
int rear = -1;

// Check if deque is full
int isFull()
{
    return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
}

// Check if deque is empty
int isEmpty()
{
    return (front == -1);
}

// Insert element at front
void enqueueFront(int x)
{
    if (isFull())
    {
        printf("Deque is full! Cannot insert %d at front\n", x);
        return;
    }
    if (isEmpty())
    { // First element insertion
        front = rear = 0;
    }
    else if (front == 0)
    {
        front = MAX - 1; // Wrap front to end
    }
    else
    {
        front = front - 1;
    }
    deque[front] = x;
    printf("Inserted %d at front\n", x);
}

// Insert element at rear
void enqueueRear(int x)
{
    if (isFull())
    {
        printf("Deque is full! Cannot insert %d at rear\n", x);
        return;
    }
    if (isEmpty())
    { // First element insertion
        front = rear = 0;
    }
    else if (rear == MAX - 1)
    {
        rear = 0; // Wrap rear to beginning
    }
    else
    {
        rear = rear + 1;
    }
    deque[rear] = x;
    printf("Inserted %d at rear\n", x);
}

// Remove element from front
int dequeueFront()
{
    if (isEmpty())
    {
        printf("Deque is empty! Cannot delete from front\n");
        return -1;
    }
    int val = deque[front];
    if (front == rear)
    { // Single element left
        front = rear = -1;
    }
    else if (front == MAX - 1)
    {
        front = 0; // Wrap front to beginning
    }
    else
    {
        front = front + 1;
    }
    printf("Deleted %d from front\n", val);
    return val;
}

// Remove element from rear
int dequeueRear()
{
    if (isEmpty())
    {
        printf("Deque is empty! Cannot delete from rear\n");
        return -1;
    }
    int val = deque[rear];
    if (front == rear)
    { // Single element left
        front = rear = -1;
    }
    else if (rear == 0)
    {
        rear = MAX - 1; // Wrap rear to end
    }
    else
    {
        rear = rear - 1;
    }
    printf("Deleted %d from rear\n", val);
    return val;
}

// Peek front element without removing
int peekFront()
{
    if (isEmpty())
    {
        printf("Deque is empty! Nothing at front\n");
        return -1;
    }
    return deque[front];
}

// Peek rear element without removing
int peekRear()
{
    if (isEmpty())
    {
        printf("Deque is empty! Nothing at rear\n");
        return -1;
    }
    return deque[rear];
}

int main()
{
    enqueueRear(10);
    enqueueRear(20);
    enqueueFront(5);
    enqueueFront(2);

    printf("Front element: %d\n", peekFront());
    printf("Rear element: %d\n", peekRear());

    dequeueFront();
    dequeueRear();

    printf("Front element after deletion: %d\n", peekFront());
    printf("Rear element after deletion: %d\n", peekRear());

    return 0;
}
