// find if keyword is input or not
// string comparison logic

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    string arr[]={"break", "continue", "default", "I", "Love", "You", "I Love You" };
    string word;
    cin>>word;
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp = 1;
    for(int i=0; i<n; i++){
        if(word == arr[i]){
            temp = 0;
        }
    }
    if(temp == 0){
        cout<<word<<" : This is keyword"<<endl;
    }
    else{
        cout<<word<<" : This is not a keyword"<<endl;
    }
    return 0;
}
