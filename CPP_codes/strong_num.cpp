#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n == 1)
     return n;
    else
     return n*factorial(n-1);
}

int main(){
    int a;
    cin>>a;
    int temp = a;
    
    int sum = 0;
    while(a!=0){
            int r = a%10;
            sum = sum + factorial(r);
            a=a/10;
    }

    if(sum == temp){
        cout<<temp<<" : is strong"<<endl;
    }
    else{
        cout<<temp<<" : is not strong"<<endl;
    }
    return 0;
}