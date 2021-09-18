#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, j, i;
    int count = 1;
    cin>>n;
    int arr[n];
    
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[i] == arr[j]  && i != j)
            break;
        }
        if(j == n){
            cout<<arr[i]<<endl;
            ++count;
        }
    }



    return 0;
}