#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            return 0;
        }
        
            
        
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){

        if(isPrime(arr[i])){
            cout<<arr[i]<<" is prime"<<endl;
        }else{
            cout<<arr[i]<<" is not prime"<<endl;
        }



    }
    return 0;
}