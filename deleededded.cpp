#include <iostream>
using namespace std;

int main()
{
    int a,b,i;
    cout<<"enter a number : ";
    cin>>a;
    cout<<"Multiplication table you want upto:";
    cin>>b;

    for(i=1;i<=b;i++)
    {
        cout<<a<<" x "<<i<<" = "<<a*i<<endl;
    }
    return 0;
}