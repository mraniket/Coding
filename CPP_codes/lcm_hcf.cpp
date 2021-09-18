// Code to find HCF and LCM of two numbers
#include<iostream>
using namespace std;

int main()
{
    int a,b, lcm,hcf,r,x,y;

    cin>>a>>b;
    int min = a<b?a:b;
    for (int i = min; i>=1; i--)
    {
        if(a%i==0 && b%i==0){
            hcf=i;
            cout<<"HCF="<<hcf<<endl;
            break;
        }
    }
    cout<<"LCM="<<(a*b)/hcf<<endl;
    return 0;
}