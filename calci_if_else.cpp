#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char operation;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    cout<<"select an operation(+,-,*,/)"<<endl;
    cin>>operation;

    if(operation=='+')
    {
        int c=a+b;
        cout<<"sum is "<<c<<endl;
    }
    else if (operation=='-')
    {
        int d=a-b;
        cout<<"difference is "<<d<<endl;
    }
    else if(operation=='*')
    {
        int e=a*b;
        cout<<"product is "<<e<<endl;
    }
    else if (operation=='/')
    {
        int f=a/b;
        cout<<"quotient is "<<f;
    }
    return 0;
    


}