
// A Simple C++ program to reverse a string
#include <bits/stdc++.h>
using namespace std;
 
// Driver program
int main()
{
    string str;
    cin>>str;
    int n = str.length();
    int j= n-1; int i;
    int temp;
 
    for (i = 0; i < n/2; i++, j--){

        temp=str[i];
        str[i]=str[j];
        str[j]= temp;
    }
    cout << str;
    return 0;
}
