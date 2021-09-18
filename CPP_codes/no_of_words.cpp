// #include<iostream>
#include<bits/stdc++.h>
// #include<string>


using namespace std;

int main(){
    char str[100] = {0};
    fgets(str,100,stdin);

    int i,spacecount=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]==' ' && str[i+1]!=' '){
            spacecount++;
        }

    }
    // printf("%d", sc+1);
    cout<<spacecount+1;
    return 0;
}