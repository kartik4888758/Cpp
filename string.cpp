#include <iostream>
using namespace std;

void ans()
{

    string str;
    cout << "enter a string: ";
    cin >> str;
    string reverse = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reverse += str[i];
    }
    cout << reverse;
}
int main()
{
    ans();
    return 0;
}