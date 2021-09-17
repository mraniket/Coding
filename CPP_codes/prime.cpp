#include<iostream>
using namespace std;


int main(){

    int n,m, prime=0;
    cout<<"Enter a number to check if it is prime or not :";
    cin>>n;
    m = n/2;
    for(int i=2; i<=m; i++){
        if(n%i==0){
            cout<<"Number is not prime"<<endl;
            prime = 1;
            break;
        }
        
    }
    if(prime==0){
        cout<<"Number is  prime"<<endl;
    }
    return 0;
}

