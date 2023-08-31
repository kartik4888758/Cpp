#include <iostream>
using namespace std;

class Play{
    private:
    string name;
    int age;

    public:
    Play(string naam,int aage)
    {
        name=naam;
        age=aage;
    }
    void ask(){
        cout<<"name is "<<name<<" and his age is: "<<age;
    }
};
int main(){
    Play abc("ravi",19);
    abc.ask();
    return 0;

}