// given a maximum of 100 digit number as input, find the 
// diffrence between the sum of odd and even positiin degit

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){

    int str;
    char arr[100];
    cin>>arr;
    int n = strlen(arr);
    int even_sum = 0; 
    int diff = 0;
    int odd_sum = 0;
    if(n>1){
        for(int i=0; i<n; i++){
            if(i%2==0){
                even_sum = even_sum + arr[i];

            }
            else
            odd_sum = odd_sum + arr[i];
        }
        diff = even_sum - odd_sum;
        cout <<abs(diff);
    }
    else{

        cout<<"Enter number of 2 or more digits "<<endl;
    }
    return 0;
}