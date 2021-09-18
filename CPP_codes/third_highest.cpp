#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void thirdlargest(int arr[], int size){
    int i, first, second, third;
    if(size<3){
        cout<<"Invalid input";
        return;
    }
    first=second=third=-1;
    for(i=0; i<size; i++){
        if(arr[i]>first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second){
            third=second;
            second = arr[i];
        }
        else if(arr[i]>third)
            third = arr[i];
        
    }
    cout << third <<endl;

}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        
        cin>>arr[i];
    }

    thirdlargest(arr, n);
    

    return 0;
}