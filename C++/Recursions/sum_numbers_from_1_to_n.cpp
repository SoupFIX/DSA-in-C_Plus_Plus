#include<iostream>
using namespace std;
int do_sum(int n,int i,int sum)
{
  while(i!=n+1)
  {
    sum+=i;
    return do_sum(n,i+1,sum);
  }
  return sum;
}
int main()
{
    int n,sum=0;
    cout<<"enter the number : ";
    cin>>n;
    sum = do_sum(n,1,sum);
    cout<<sum;
    return 0;
}