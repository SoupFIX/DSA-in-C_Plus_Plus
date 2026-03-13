#include<iostream>
#include<string>
using namespace std;
typedef string st;
st reverse(st s,int len,int i,st new_s)
{
   while((len-1)!=i)
   {
     new_s+= s[len-1];
     return reverse(s,len-1,i,new_s);
   }
   return new_s;
}
int main()
{
    st s,new_s;
    cout<<"enter a string : ";
    getline(cin,s);
    int len = s.length();
    new_s = reverse(s,len,-1,new_s);
    cout<<new_s;
}