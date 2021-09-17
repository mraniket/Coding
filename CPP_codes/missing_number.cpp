// Given an array arr of size N. Ideally it should contain 1 to N numbers ( in no particular order ), but one number is overridden by any other value. Return the number which is overridden.

// Constraints

// 1 <= N <= 500

// Input Format :
// First line be value pf N.
// There will be next N lines where each line will have positive integer.

// Output Format : Print the number which is overridden.


// Test Case 1

// Input :
// 5
// 2
// 1
// 100
// 5
// 3

// Output : 4

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    sort(arr,arr+n);
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==i+1)
        {
            continue;
        }
        else
        {
            cout<<i+1;
            break;
        }
    }

    return 0;
}