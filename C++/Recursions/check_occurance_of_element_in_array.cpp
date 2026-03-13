#include<iostream>
using namespace std;
int count_occurance(int N[],int size,int i,int count,int element)
{   

    if(N[i]==element)
    {
        count++;
        return count_occurance(N,size,i+1,count,element);
    }
   
   return count;
}
int main()
{
    int x,N[5],element,count=0;
    for(int &s : N)
    {
        cout<<"enter element  : ";
        cin>>s;
    }
     for(int i :N)
    {
        cout<<i<<"\t";
    }
    int size = sizeof(N)/sizeof(N[0]);
    cout<<"\nenter th element to check occurance : ";
    cin>>element;
    count = count_occurance(N,size,0,0,element);
    cout<<"the occurance of " << element << " is " << count;
    return 0;
}