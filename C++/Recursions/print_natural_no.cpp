#include<iostream>
using namespace std;
int print_numbers(int n,int i)
{
  while(i!=51)
  {   cout<<i<<" ";
    return print_numbers(n,i+1);
  }
}
int main()
{   int n =50,res =0;
   print_numbers(n,1);
   return 0;
}