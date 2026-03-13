#include<iostream>
#include<climits>
using namespace std;
typedef double d;
// defining a function to find out smallest from the array
d find_smallest(d arr[],d small,int n,int i)
{
  while(i!=n)
  {
    if(small>arr[i])
    {
      small = arr[i];
      return find_smallest(arr,small,n,i+1);
    }
    else
    {
      return find_smallest(arr,small,n,i+1);
    }
  }
  return small;
}
int main()
{ //smallest is holding the maximum possible value that it can hold
  d n,smallest = INT_MAX,res=0,arr[100]={};
  cout<<"enter the size of the array : ";
  cin>>n;
  for(int i =0;i<n;i++)
  {
    cout<<"enter the array : ";
    cin>>arr[i];
  }
  res = find_smallest(arr,smallest,n,0);
  cout<<"the smallest number from the array of integers is :"<<res;
  return 0;

}