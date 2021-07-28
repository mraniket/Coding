// Longest arithmetic subarray i.e diffrence between the two is same 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"Enter array elements"<<endl;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    int ans = 2; //max lenthg subarray with common diffrence 
    int pd = arr[1]-arr[0]; //previous common diffrence which is of starting two elements
    int j = 2;  //start iteration from second index
    int curr = 2; //current lenth of subarray

    while (j<n)
    {
        if(pd == arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd = arr[j]-arr[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout<<ans<<endl;

    return 0;
}