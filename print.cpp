#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

class Student : public Person
{
public:
    int studentID;
};

class Teacher : public Person
{
public:
    string department;

};

#include <iostream>
using namespace std;

class Person{
    private:
    string firstname,lastname;

    public:
    Person(string a,string b)
    {
        firstname=a;
        lastname=b;
    }

    int getFullName()
    {
       cout<<firstname<<" "<<lastname;
    }
};

int main()
{
    Person abc("KARTIK","SINGH");
    abc.getFullName();
    return 0;

}

#include <fstream>
#include <string>
#include <iostrem>
using namespace std;

int main()
{
    string filename = "test.txt";
    string line;
    ofstream outfile(filename);

    if (outfile.is_open())
    {
        outfile << "hello world" << endl;
        outfile << "hi";
        outfile.close();
    }
    else
    {
        outfile << "unable to open";
    }
    return 0;
}



