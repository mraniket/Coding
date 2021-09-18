#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string input;
    getline(cin, input);
    if(input==""){
        cout<<"INVALID OUTPUT"<<endl;
        return 0;
    }
    int acount = 0;
    int ecount = 0;
    int icount = 0;
    int ocount = 0;
    int ucount = 0;
    string s="";
    for(int i =0; i<input.length();i++){
        if(input[i]=='a') acount++;
        else if(input[i]=='e') ecount++;
        else if(input[i]=='i') icount++;
        else if(input[i]=='o') ocount++;
        else if(input[i]=='u') ucount++;

        else s = s+input[i];
    }
    cout<<"a"<<":"<<acount<<endl;
    cout<<"e"<<":"<<ecount<<endl;
    cout<<"i"<<":"<<icount<<endl;
    cout<<"o"<<":"<<ocount<<endl;
    cout<<"u"<<":"<<ucount<<endl;
    cout<<s;
    return 0;
}