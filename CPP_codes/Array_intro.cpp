#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout<<"Enter Num of array elements"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter array elements"<<endl;

    for (int  i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        
        cout<<array[i]<<" ";
    }
    return 0;
    
    
}