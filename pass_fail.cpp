#include <iostream>
using namespace std;
int main()
{
    int eng,hindi,maths,sci,cs;
    cout<<"enter your english marks:";
    cin>> eng;
    cout<<"enter your hindi marks:";
    cin>> hindi;
    cout<<"enter your mathematics marks:";
    cin>> maths;
    cout<<"enter your science marks:";
    cin>> sci;
    cout<<"enter your computer science marks:";
    cin>> cs;
    int a;

    if(eng>=45 && hindi>=45 && maths>=45 && sci>=45 && cs>=45)
    { 
        cout<<"You are pass."<<endl;
        a=(eng+maths+sci+cs+hindi)/5;
        cout<<"Your average marks is "<<a<<"."<<endl;
        int b;
        b=eng+maths+sci+cs+hindi;
        float c;
        c=(b*100)/750;
        cout<<"Your obatined "<<c<<" %.";
    }
    else if( eng<45)
    {
        cout<<"You are fail in English. ";
    }
    else if( hindi<45)
    {
        cout<<"You are fail in hindi. ";
    }
    else if( maths<45)
    {
        cout<<"You are fail in Mathematics. ";
    }
    else if( sci<45)
    {
        cout<<"You are fail in Science. ";
    }
    else
    {
        cout<<"You are fail in Computer science. ";
    }
    return 0;
}
