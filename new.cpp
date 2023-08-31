#include <iostream>
using namespace std;
 void result()
 {
    int a,b,c;
    cout<<"Enter marks obtained in CA:";
    cin>>a;
    cout<<"Enter marks obtained in internals:";
    cin>>b;
    
    c=a+b;
    if(c>50)
    {
        cout<<"You are declared PASS!!!";
    }
    else
    {
        cout<<"You are declared FAIL!!!";
    }

 }
 int main()
 {
    result();
    return 0;
 }