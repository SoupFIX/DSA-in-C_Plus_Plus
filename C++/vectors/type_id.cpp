#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    int x=67;
    float c = 6789.789879;
    char k = 'a';
    string z = "sosdvcetb";
    bool e = true;
    time_t r = 456;
    long int l = 3453564674575678678;
    double o = 666;
    signed int a = -2345;
    cout<<typeid(x).name()<<"\n";
    cout<<typeid(c).name()<<"\n";
    cout<<typeid(k).name()<<"\n"; 
    cout<<typeid(z).name()<<"\n";
    cout<<typeid(e).name()<<"\n";
    cout<<typeid(r).name()<<"\n";
    cout<<typeid(l).name()<<"\n";
    cout<<typeid(o).name()<<"\n";
}