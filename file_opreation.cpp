#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string filename="test.txt";
    string line;
    ofstream outfile(filename);
    
    if(outfile.is_open())
    {
        outfile<<"hello world"<<endl;
        outfile<<"hi";
        outfile.close();
    }
    else
    {
        outfile<<"unable to open";
    }
    return 0;
}
to read from  a file
int main()
{
    string filename="test.txt";
    string line;
    ifstream infile(filename);
    
    if(infile.is_open())
    {
        getline(infile,line);
        cout<<line;
        infile.close();
    }
    else
    {
        cout<<"unable to open";
    }
    return 0;
}



