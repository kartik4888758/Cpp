#include <iostream>
using namespace std;

int main()
{
    // int a = 10;
    // int *aptr;
    // aptr = &a;

    // cout<<*aptr<<endl;
    // *aptr=20;
    // cout<<a<<endl;

    int arr[]={10,20,30,40,50};
    cout<<*arr<<endl;

    int *ptr=arr;
    for(int i=0;i<5;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }


    return 0;
}