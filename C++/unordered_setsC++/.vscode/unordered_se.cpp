#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>n;
    for(int i=0;i<=5;i++)
    {
        n.insert(i);
    }   
      int i=0;
     for(auto &i :n)
     {
           cout<<i<<"\n";
     }
     int x=  n.count(1);
      cout<<x;
     return 0;
}