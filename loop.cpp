#include <iostream>
using namespace std;
int main()

//PROGRAM USING FOR LOOP; SUM OF 'N' NUMBERS_ _ _ _ _ _ _ _ _ _ _ _ _ 
// {
//     int a;
//     cout<<"enter number upto which sum is required:";
//     cin>>a;
//     int i;
    
//     int sum=0;
//     for(int i=1;i<=a;i++)
//     {
//         sum=sum+i;
//     }
//     cout<<sum<<endl;

//     return 0;

// }


// {
//     int a;
//     cout<<"enter your number:";
//     cin>>a;

//     while(a>0)
//     {
//         cout<<a<<endl;
//         cin>>a;
//     }
//     return 0;
// }


// REPETITION OF NUMBER/STRING/CHARACTER AS MENY TIMES DESIRED BY USERS__--_------------------------ 
{
    string name;
    cout<<"enter your name:";
    cin>>name;

    int a;
    cout<<"repetition time:";
    cin>>a;

    int i;
    for(i=1;i<=a;++i)
    {
        cout<<name<<endl;
    }
    
    return 0;

}
