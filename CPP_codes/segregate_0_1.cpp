// segeregate betwwen o's and 1's
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int l = 0 , r = n-1;
    while(l<r){
        if(arr[l]==0){
            l++;
        }
        if(arr[r]==1){
            r--;
        }
        if(arr[l] == 1 && arr[r]==0){
            
            arr[l]=0;
            arr[r]=1;
            l++;
            r--;
        }
            
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}