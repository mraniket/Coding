#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number to check palindrome"<<endl;
    cin>>n;

    int temp = n;
    int r; int sum=0;

    while(n!=0){
        r = n%10;
        sum = sum * 10 + r;
        n = n/10;
    }
    cout<<"The reversed number is :"<<sum<<endl;

    if (sum == temp){
        cout<<"Number is palindrome"<<endl;
    }
    else {
        cout<<"number is not palimdrome";
    }
}