#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  vector<char > n(5);
  for(char &c :n)
  {
    cout<<"enter number : ";
    cin>>c;
  }
  int c;
 // replace(n.begin(),n.end(),e,'_');
  for(char &i :  n)
  { if(isdigit(c))
    {
        c= '_';
    }
  }
  for(char &s : n)
  {
    cout<<s<<"\n";
  }
return 0;
}
