// Write o programme to check weather the charachter is Vovel Or Consonent
#include<iostream>
using namespace std;

int main(){
    char ip;
    char vowel[] ={'A','E','I','O','U','a','e','i','o','u'};
    cout<<"Enter Char to check"<<endl;
    cin>>ip;
    for(int i=0; i<10; i++){
        if(vowel[i]==ip){
            cout<<"It's a vowel"<<endl;
            return 0;
        }
    }
    cout<<"It's a Consonent"<<endl;
    return 0;
}