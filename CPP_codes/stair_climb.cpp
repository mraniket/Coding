// In how many ways one can climb either by 
// climbing either one or two steps at a time
// stairs not greater than 24
#include<bits/stdc++.h>
using namespace std;

int climb_ways(int c){
    if(c<=1)
        return 1;
    else 
        return climb_ways(c-1)+climb_ways(c-2);
}

int main(){
    int n;
    cin>>n;
    int result;
    if(n>25 || n<0){
        cout<<"Wrong Input"<<endl;

    }
    else{
        result = climb_ways(n);
         cout<<result<<endl;
    }
        
   
       
    return 0;
}