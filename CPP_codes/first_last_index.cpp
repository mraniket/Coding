// To finde the index of first occurance and last occurance of the given number in an array

#include<iostream>
using namespace std;

int main(){

    int first=-1, i, last=-1, e;
    int n;
    cin>>n;
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter number to find index"<<endl;
    cin>>e;

    for ( i = 0; i < n; i++)
    {
                if(arr[i]==e){
                    if(first==-1)
                    first=last=i;
                    else
                    last=i;
                }
    }
    if(first==-1)
    cout<<"No Occurances"<<endl;
    else
    cout<<"First index:"<<first<<"  Last index:"<<last<<endl;
    return 0;
}