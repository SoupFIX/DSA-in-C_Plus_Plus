// vector basic declaration and initialization and accessing elements
#include<iostream>
#include<vector>
using namespace std;
int main()
{ // defining a vector named "s" of int data type
  vector<int> s;
  // entering elements in s
  s.push_back(10);
  s.push_back(20);
  //entering elements during declaration 4 is the size and all initialized to 10.
  vector<int> q(4,16);
  //accessing size of vector
  int siz = s.size();
  // accessing elements
  for(int &i : s)
  {
    cout<<s[i]<<"\n";
  }
int qiz = q.size(); 
  for(int i=0;i<qiz;i++)
  {
    cout<<q[i]<<"\n";
  }
  cout<<"current capaciyty of s vector is "<<s.capacity();
  cout<<"current capaciyty of q vector is "<<q.capacity();
  //to remove elements from the back.
  s.pop_back();
  int sizz = s.size();
   for(int i=0;i<sizz;i++)
  {
    cout<<s[i]<<"\n";
  }
  // accesing elements directly by their index number,3 is the index.
  cout<<q.at(3);
  return 0;
}