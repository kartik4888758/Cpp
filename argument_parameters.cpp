// #include <iostream>
// using namespace std;

// void sum(int a,int b)
// {
//   int result=a+b;
//   cout<<"sum is "<<result;  
// }

// int main()
// {
//     int x=5;
//     int y=6;
//     sum(x,y)
//     return 0;
// }

//c++ program to 



//c++ program for positive/negative number using argument.
#include <iostream>
using namespace std;

void num(float a)
{
    cout<<"enter your number:";
    cin>>a;
    if(a>0)
    {
        cout<<"number is positive.";
    }
    else
    {
        cout<<"Number is negative.";
    }
}
int main()
{
    int x;
    num(x);
    return 0;
}


//c++ program for positive/negative number without using argument.
#include <iostream>
using namespace std;

void num()
{
    float a;
    cout<<"enter your number:";
    cin>>a;
    if(a>0)
    {
        cout<<"Number is positive.";
    }
    else
    {
        cout<<"Number is negative.";
    }
}
int main()
{
    num();
    return 0;
}

//c++ program for positive/negative number
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"enter your number:";
    cin>>a;
    if(a>0)
    {
        cout<<"Number is positive.";
    }
    else
    {
        cout<<"Number is negative.";
    }
    return 0;
}