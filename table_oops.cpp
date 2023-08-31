#include <iostream>
using namespace std;
class maths{
    public:
    int a,i;

    int table(){
        for(i=1;i<=10;++i){
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
        }
    }
};
int main()
{
    maths xyz;
    cout<<"enter a number to generate table:";
    cin>>xyz.a;
    xyz.table();

    return 0;


}