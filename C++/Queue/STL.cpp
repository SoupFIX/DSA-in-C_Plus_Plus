#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    //
    cout << "The size of the queue is : " << q.size() << endl;
    // q.emplace(78);
    while (!q.empty())
    { // to print the front element of the queue
        cout << q.front() << " ";
        // to delete the element from the front
        q.pop();
    }
    // q.emplace(78);
    cout << q.size();
    return 0;
}