#include<iostream>
#include<vector>
using namespace std;
int main()
{  
  vector<int> st; 
    st.push_back(1);
    st.push_back(2);
    st.push_back(3);
    st.push_back(4);
    st.push_back(5);
    cout<<"size of the vector is : "<<st.size()<<"\n";
    cout<<"front element of the vector is : "<<st.front()<<"\n";
    cout<<"last element of the vector is : "<<st.back()<<"\n";
    cout<<"capacity of the vector is : "<<st.capacity()<<"\n";
    return 0;
}
