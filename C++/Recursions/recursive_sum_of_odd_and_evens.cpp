#include<iostream>
using namespace std;
int sum_of_even(int start,int end,int even_sum)
{
    while(start!=end+1)
    {
        if(start%2==0)
        {
            even_sum+=start;
            return sum_of_even(start+1,end,even_sum);
        }
        else
        {
            return sum_of_even(start+1,end,even_sum);
        }
    }
    return even_sum;
}
int sum_of_Odd(int start,int end,int odd_sum)
{
   while(start!=end+1)
   {
     if(start%2!=0||start==1)
     {
        odd_sum+=start;
        return sum_of_Odd(start+1,end,odd_sum);
     }
     else
     {
        return sum_of_Odd(start+1,end,odd_sum);
     }
   }
   return odd_sum;
}
int main()
{
    int start,end,odd_sum=0,even_sum=0;
    cout<<"enter the start number : ";
    cin>>start;
    cout<<"enter the end number : ";
    cin>>end;
    odd_sum = sum_of_Odd(start,end,odd_sum);
    even_sum = sum_of_even(start,end,even_sum);
    cout<<" the sum of odds from "<< start <<" to "<< end <<" is " << odd_sum<<"\n";
    cout<<" the sum of evens from "<< start <<" to "<< end <<" is " << even_sum;
    return 0;
}