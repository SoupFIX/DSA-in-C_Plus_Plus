#include <iostream>
#include <stdlib.h>
using namespace std;
class queue
{
    int f, r, capacity, curr_size, *arr;

public:
    queue(int size)
    {
        capacity = size;
        // f for front,r for rear
        f = 0;
        r = -1;
        curr_size = 0;
        arr = new int[capacity];
    }

public:
    // enqueue
    void push(int x)
    {
        if (curr_size == capacity)
        {
            cout << "Queue is full!\n";
            return;
        }
        r = (r + 1) % capacity;
        arr[r] = x;
        curr_size++;
    }
    // dequeue
    void pop()
    {
        if (curr_size == 0 || f == capacity)
        {
            cout << "queue is already empty!\n";
            return;
        }
        // updating f pointer
        f = (f + 1) % capacity;
        // reducing the size
        curr_size--;
    }
    bool full()
    { // condition for loopback of the array
        if (((r + 1) % capacity) == f)
        {
            return true;
        }
        return false;
    }
    int frontele()
    {
        if (curr_size == 0 || r == -1)
        {
            cout << "Queue is empty!\n";
            return -1;
        }
        return arr[f];
    }
    bool empty()
    {
        return curr_size == 0;
    }
    void display()
    {
        while (!empty())
        {
            cout << frontele() << " ";
            pop();
        }
    }
};
int main()
{
    queue q(5);
    cout << "welcome to the queue simulator!\n";
    while (true)
    {
        cout << "Press '1' for pushing elements to the queue \nPress '2' for deleting elements from the queue\n";
        cout << "Press '3' for showing up the front-most element of the queue\nPress '4' for checking the emptiness of the queue";
        cout << "Press '5' for checking if the queue is full or not\nPress '6' to display the elements of the queue\n";
        int input;
        cout << "ENTER YOUR CHOICE : ";
        cin >> input;
        switch (input)
        {
        case 1:
            int x;
            cout << "Enter the number : ";
            cin >> x;
            q.push(x);
            break;
        case 2:
            q.pop();
            break;
        case 3:
            cout << q.frontele() << endl;
            break;
        case 4:
            if (q.empty())
            {
                cout << "Queue is empty \n";
            }
            else
            {
                cout << "Queue is not empty \n";
            }
            break;
        case 5:
            if (q.full())
            {
                cout << "Queue is full!\n";
            }
            else
            {
                cout << "Queue is not full\n";
            }
            break;
        case 6:
            q.display();
            cout << endl;
            break;
        default:
            cout << "Wrong input!\nplease try again\n";
            break;
        }
    }
    return 0;
}
