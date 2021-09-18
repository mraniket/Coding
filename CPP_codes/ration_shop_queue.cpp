#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int length, mint;
    cin>>mint>>length;
    int totalmint = mint, prev;
    for(int i=1; i<length; i++){
        
        prev = totalmint - 1;
        totalmint = totalmint + prev;
        
    }
    cout<<totalmint;

    return 0;

}