#include <iostream>
using namespace std;
int curr_size = 0, capacity;
class queue
{
  int f, r;
  queue(int capacity)
  {
    f = 0, r = -1;
    int ar = new arr[capacity];
  }
  void enqueue(int val)
  {
    if (curr_size == capacity)
    {
      cout << "Queue is full!";
      return;
    }
    r = (r + 1) % capacity;
    ar[r] = val;
    curr_size++;
    void dequeue()
    {
      f = (f + 1) % capacity;
      curr_size--;
    }
    int front()
    {
      return ar[f];
    }
    bool empty()
    {
      return curr_size == 0;
    }
    bool full()
    {
      return curr_size == capacity;
    }
    void display()
    {
      for (int i = f; i < capacity; i++)
      {
        cout << ar[i];
      }
    }

    // driver code
    int main()
    {
      int c;
      cout << "Enter the size : ";
      cin >> c;
      queue q(c);
      q.enqueue(12);
      q.enqueue(13);
      q.display();
      return 0;
    }
