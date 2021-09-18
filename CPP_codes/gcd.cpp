#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,gcd,i;
    cin>>a>>b;
    int min = a<b?a:b;
    if(a<0 || b<0){
        cout<<"Wrong Input"<<endl;
        return -1;
    }else if(a==1 || b==1){
        cout<<"1 is the gcd/hcf of given two numbers"<<endl;
        return -1;
    }
    for( i=min-1; i>=2; i--){
        if(a%i==0 && b%i==0){
            gcd = i;
            break;
        }
    }
    if(i==1){
        gcd = min;
    }

    cout<<gcd<<" is the gcd/hcf of given two numbers"<<endl;
    return 0;
}