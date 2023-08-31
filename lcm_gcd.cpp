#include <iostream>
using namespace std;

int hcf,a,b;
void HCF()
{
    
    cout<<"enter greater number:";
    cin>>a;
    cout<<"enter smaller number:";
    cin>>b;
    
    for(int i=1;i<=a;++i)
    {
        if (a%i==0 && b%i==0)
        {
            hcf=i;
        }
    }
    cout<<"HCF= "<<hcf<<endl;
}

void LCM()
{
    int lcm;
    lcm=(a*b)/hcf;
    cout<<"LCM of both numbers is = "<<lcm<<endl;
}

int main()
{
    
    HCF();
    LCM();
    return 0;

}