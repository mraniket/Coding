#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // For Lowercase
    char input[50];
    scanf("%s", input);

     puts(strupr(input));  //puts will print uppercase
    // for(int i=0; input[i]!='\0';i++){
    //     input[i]=97-input[i]+122;
    // }

    for(int i=0; input[i]!='\0';i++){
        input[i]=65-input[i]+90;
    }
    // cout<<input<<endl;
    cout<<input<<endl;

return 0;

}