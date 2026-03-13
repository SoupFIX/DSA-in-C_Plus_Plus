#include<iostream>
#include<vector>
#include<string>
using namespace std;
string reverse_number(string a,int len,int i,string reverse)
{
   while(i!=len+1)
   {
    reverse +=a[len-i];
    return reverse_number(a,len,i+1,reverse);
   }
   return reverse;
}
int main()
{
    string a,new_reverse ={};
    cout<<"enter the string : ";
    getline(cin,a);
    int len=a.length() ;
    new_reverse = reverse_number(a,len,1,new_reverse);
    cout<<new_reverse;
    return 0;
}