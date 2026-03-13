#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void sort_3_var(int a,int b,int c)
{
  vector<int> n;
  n.push_back(a);
  n.push_back(b);
  n.push_back(c);
  bool d = true;
  while(d)
  {  
    d =  false;
    for(int i=0;i<n.size();i++)
    {
      if(n[i]>n[i+1])
      {
        int t = n[i];
        n[i] = n[i+1];
        n[i+1] = t;
        d = true;
      }
    }
  }
  a = n[0];
  b = n[1];
  c=  n[2];
  cout<< a<<"\n" << b <<"\n"<< c;
}

int main()
{
    int a,b,c,s[3],x=0;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    cout<<"ente c : ";
    cin>>c; 

    sort_3_var(a,b,c);
    
}