#include<iostream>
using namespace std;
int calc_power(int base, int power,int i,int res)
{
   while(i!=power+1)
   {
    res*=base;
    return calc_power(base,power,i+1,res);
   }
   return res;
}
int main()
{
    int base,power,res=1;
    cout<<"enter the base value  : ";
    cin>>base;
    cout<<"enter the power value : ";
    cin>>power;
    res = calc_power(base,power,1,res);
    cout<<" the power of "<< base <<" raised to the power "<< power <<" is "<< res;
    return 0;
}