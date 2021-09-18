#include<iostream>
using namespace std;


int Sum(int n){

    if(n==0){
        return 0;
    }

    int previousSum = Sum(n - 1);
    return n + previousSum;

}

int main(){
    int n;
    cin>>n;

    cout<<Sum(n);

    return 0;
}