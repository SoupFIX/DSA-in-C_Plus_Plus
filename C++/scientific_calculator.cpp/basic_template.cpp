#include<iostream>
#include<vector>
#include<math.h>
#include<conio.h>
using namespace std;
typedef double d;
typedef float f;
#define PI 3.1415;
d add(vector< d> input_numbers)
{
    d add=0;
    for( d &i : input_numbers)
    {
         add+=i;
    }
    return add; 
}
d sub(vector<d> input_numbers)
{
    d sub = 0 ;
    for(d & i : input_numbers)
    {
        sub+=i;
    }
    return sub;
}
d mul(vector<d>input_numbers)
{
    d mul=1;
    for(d &i: input_numbers)
    {
        mul*= i;
    }
    return mul;
}
d div(d a,d b)
{
f div;
div = a/b;
return div;
}
d trigo(d l)
{   int trigo;
    cout<<"ENTER 1: SIN()\nENTER 2: COS()\nENTER 3: TAN()\nENTER 4: COSEC()\nENTER 5: SEC()\nENTER 6: COT()";
    cout<<"enter trigo to perform : "; cin>>trigo;
    switch(trigo)
    {
        case 1 :
        return sin(l);

        case 2 : 
        return cos(l);

        case 3 :
        return tan(l);
        
    }
}
d hyperbolic(d h)
{   int enter;
    cout<<"ENTER 1: SINH\nENTER 2: COSH\nENTER 3: TANH\nENTER 4: COSECH\nENTER 5 :SEC\nENTER 6 : COT\n"
    cin>>enter;
    switch(enter)
    {
        case 1 :
        return sinh(h);
        case 2 :
        return cosh(h);
        case 3 :
        return tanh(h);
        case 4 :
        return 1/sinh(h);
        case 5 :
        return 1/cosh(h);
        case 6 :
        return 1/tanh(h);
    }
}
int main()
{    int i=0;
    d result;
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
    
    cout<<"\t \tWELCOME TO USE A SCIENTIFIC CALCULATOR :\t \n";
    int num,input;
    cout<<"Enter the total number of numbers with with you want to do any operations : ";
    cin>>num;
    vector< d>input_numbers(num);
    for( d &i: input_numbers)
    {
        cout<<"enter the number : ";
        cin>>i;
    }
    cout<<"\t \t \t FOR ADDITION SUBTRACTION MULTIPLICATION DIVISION \t \t \t \n";
    cout<<"[PRESS 1 : ADDITION]\n[PRESS 2 : SUBTRACTION]\n[PRESS 3 : MULTIPLICATION]\n";
    cout<<"[PRESS 4 : DIVISION]\n";
    cout<<"[PRESS 5 : POWER ]\n[PRESS 6: SQRT]\n[PRESS 7: CUBEROOT]\n[PRESS 8: EXPONENTIAL]";
    cout<<"\n[PRESS 9 : LOG]\n[PRESS 10: TRIGONOMETRIC]\n[PRESS : 11 FIND_MAX ]\n[PRESS 12 : HYPOTENUSE]";
    cout<<"\n[PRESS 13 : HYPERBOLIC FUNCTIONS]"
    cin>>input;
    switch (input)
   {// for addition
        case 1: 
      cout<<" YOU ARE ADDITION \n";
        result = add(input_numbers);
        cout<<"OUTPUT IS : "<<result;
        break;
    // for subtration
      case 2:
        cout<<"YOU ARE SUBTRACTION";
        result = sub(input_numbers);
        cout<<"output is : "<<result;
        break;
    // for multiplication
       case 3:
       cout<<"YOU ARE MULTIPLYING";
       result = mul(input_numbers);
       cout<<"output is : "<<result;
       break; 
    // for division
            case 4:
       d a,b;
       cout<<"enter first number : "; cin>>a;
       cout<<"enter second number : ";cin>>b;
       cout<<"YOU ARE DIVIDING\n";
       if(b==0)
       {
        cout<<"ZERO DIVISION ERROR";
        exit(1);
       }
       result= div(a,b);
       cout<<"output is : "<<result;
       break;
    // for power
        case 5 :
        d power,base;
        cout<<"enter the base :  "; cin>> base;
        cout<<"enter the power : "; cin>>power;
        result = pow(base,power);
        cout<<"output is : "<<result;
        break;
    // square root
       case 6 :
       d s;
       cout<<"enter number : "; cin>>s;
       result = sqrt(s);
       cout<<"output is : "<<result;
       break;
    // cube root
    case 7 :
    d q;
    cout<<"enter number : "; cin>>q;
    result = cbrt(q);
    cout<<"output is : "<<result;
    break;
    // exponential
    case 8 : 
    d e;
    cout<<"enter number : "; cin>>e;
    result = exp(e);
    cout<<"output is : "<<result;
    break;
    // logarithemic
    case 9 : 
    d l;
    cout<<"enter the number : "; cin>>l;
    result=  log10(l);
    cout<<"output is : "<<result;
    break;
    //trigonometrics
    case 10 : 
    d t;
    cout<<"enter number : "; cin>>t;
    result = trigo(t);
    cout<<"output is : "<<result;
    break;
    case 11 : 
    d x,y;
    cout<<"enter first number : ";cin>>x;
    cout<<"enter second number : ";cin>>y;
    result = max(x,y);
    cout<<"output is "<<result;
    break;   
    case 12 : 
    d p,z;
    cout<<"enter first number : ";cin>>p;
    cout<<"enter second number : ";cin>>z;
    result = hypot(p,z);
    cout<<"output is :"<<result;
    break;
    case 13 : 
    d h;
    cout<<"enter the number :";cin>>h;
    result = hyperbolic(h);
    cout<<"output is : "<<result;
    break;
}
   return 0;
}   