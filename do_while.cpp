#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char decide;
    do{float a,b,c;
    
    cout<<"enter a number:";
    cin>>a;
    cout<<"enter the power to be raised:"<<endl;
    cin>>b;
    c=pow(a,b);
    cout<<"exponential value is: "<<c<<endl;
    

    cout<<"do you want to continue:(y/n)? "<<endl;
    cin>>decide;

    }while(decide=='y');
    return 0;
}