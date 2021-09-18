#include<iostream>
using namespace std;

// 11 12 13 14 
// 21 22 23 24 
// 31 32 33 34 
// 41 42 43 44 

int main(){
    int i, j;

    for(i=1; i<=7; i++){

        for(j=1; j<=7; j++){
            if(j==1 || j==7 || i==4){
                cout<<"*";
            }
            
            else{
                cout<<" ";
           }
            // if(i==1 || i==5 || j==1 || j==5){
            //     cout<<"* ";
            // }
            // else if(i==j){
            //     cout<<"$";
                
            // }else
            // cout<<" ";
        }
        cout<<endl;
    }
    return 0;

}