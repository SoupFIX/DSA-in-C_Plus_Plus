#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main()
{  int i=0,res=0;
 unordered_set<int> a = {1,2,3,4,5};
 for(int x : a)
 {     res+=x;
 }
 cout<<res;
return 0;
}   