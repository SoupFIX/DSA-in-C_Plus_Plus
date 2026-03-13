#include<iostream>
using namespace std;
int main()
{
  int n =7,arr[n]={};
  cout<<"enter the size of the array : ";
  cin>>n ;
  for(int&i:arr)
  {
    cout<<"enter the number : ";
    cin>>i;
  }
}