// Find the pair of integers from array whose sum is given
#include<iostream>
using namespace std;

int main(){

    int i, j, k, n, givesum;
    cout<<"Enter Number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter array "<<endl;
    int arr[n];
    for( k=0; k<n; k++){
        cin>>arr[k];
    }
    cout<<"Enter sum to find pair : "<<endl;
    cin>>givesum;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==givesum)
            {
                cout<<arr[i]<<" and "<<arr[j]<<endl;
            }
        }
        
    }
    
    return 0;
}