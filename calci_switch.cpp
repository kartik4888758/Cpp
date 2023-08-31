#include <iostream>
using namespace std;


int main()
{
    int a,b,c,d,e,f;
    char op;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Select an operation (+,-,*,/):";
    cin>>op;

    switch(op)
    {
        case '+':
        c=a+b;
        cout<<"sum is "<<c<<endl;
        break;

        case '-':
        d=a-b;
        cout<<"difference is "<<d<<endl;
        break;

        case '*':
        e=a*b;
        cout<<"product is "<<e<<endl;
        break;

        case '/':
        f=a/b;
        cout<<"quotient is "<<f<<endl;
        break;
    }
        return 0;
        
}


 
    