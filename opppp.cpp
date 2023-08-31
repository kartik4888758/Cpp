#include <iostream>
using namespace std;
class maths{
    public:
    int a,b;

    int sum(){
        return a+b;
    }

};
int main(){
    maths xyz;
    cout<<"enter a number:"<<endl;
    cin>>xyz.a;
    cout<<"enter another number:"<<endl;
    cin>>xyz.b;
    cout<<"the sum is "<<xyz.sum();
    

}