#include<iostream>
#include<conio.h>
using namespace std;
int main()
{string password = "@@BIGCALC199@@";  // Set your password here
    string userInput;

    cout << "Enter password: ";
    cin >> userInput;

    if (userInput == password) {
        cout << "Access granted!" << std::endl;
    } else {
        cout << "Access denied!" << std::endl;
    }
    string password;
    char ch;
    //cout<<"Enter your Password : ";
    while((ch = getch())!='\r')
    {
        if(ch=='\b')
        {
            if(!password.empty())
            {
                password.pop_back();
                cout<<"\b \b";
            }
        }
        
        else
        {
            password.push_back(ch);
            cout<<".";
        }
    }

string correc_pass = "souptik199@";
  if(password==correc_pass)
{
    cout<<"\n \t \t \t <<<Access Granted>>> \t \t \t\n";
}
if(password!=correc_pass)
{
    cout<<"\n \t \t \t Access Denied \t \t \t";
   // exit(1);
    
}

        
}