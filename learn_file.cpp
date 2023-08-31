#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // ofstream myfile("trial.txt");
    // myfile<<"adding a lot of values for trial.";
    string line;
    ifstream myfile("trial.txt");
    while(getline(myfile,line))
    {
        cout<<line;
    }
    myfile.close();

}