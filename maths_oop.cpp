#include <iostream>
using namespace std;

class maths{
    public:
    int a,b;

    int sum(){
        return a+b;
    }

    int diff(){
        return a-b;
    }

    int product(){
        return a*b;
    }

    int division(){
        return a/b;
    }

};

int main(){
    maths xyz;

    cout<<"enter the first number:";
    cin>>xyz.a;
    cout<<"enter the second number:";
    cin>>xyz.b;

    cout<<"the sum is :"<<xyz.sum()<<endl;
    cout<<"the differnce is :"<<xyz.diff()<<endl;
    cout<<"the product is :"<<xyz.product()<<endl;
    cout<<"the quotient is :"<<xyz.division()<<endl;
    
}