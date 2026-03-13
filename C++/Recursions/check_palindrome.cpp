#include<iostream>
#include<string>
using namespace std;
typedef string st;
bool check_palindrome(st old_s,st new_s,int i)
{
    while(old_s[i]==new_s[i])
    {
        return check_palindrome(old_s,new_s,i+1);
    }
    return true;
    if(false)
    {
        return false;
    }
}
st reverse(st old_s,int len,int i,st new_s)
{
   while((len-1)!=i)
   {
     new_s+= old_s[len-1];
     return reverse(old_s,len-1,i,new_s);
   }
   return new_s;
}
int main()
{
    st old_s,new_s;
    cout<<"enter a string : ";
    getline(cin,old_s);
    int len = old_s.length();
    new_s = reverse(old_s,len,-1,new_s);
    cout<<new_s;
    if(check_palindrome(old_s,new_s,0) == true)
    {
        cout<<"IT IS A PALINDROME";
    }
    else if(check_palindrome(old_s,new_s,0) == false)
    {
        cout<<"IT IS NOT A PALINDROME";
    }
    return 0;
}