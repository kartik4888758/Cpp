// #include <iostream>
// using namespace std;
//  int main(){
//     int a;
//     do{
//     cout<<"enter a negative number:";
//     cin>>a;
//     }while(a>=0);
//     return 0;

// }
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