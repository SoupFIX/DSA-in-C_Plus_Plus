#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int>a;
    for(int i=0;i<5;i++)
    {
        a.push(i);
       cout<<a.top()<<"\n";
    a.pop();
    }
    if(a.empty()==true)
    {
        cout<<"the stack is empty";
    }
    else
    {
        cout<<"the stack is not empty";
    }
    return 0;
}