#include<iostream>
using namespace std;

int main(){
    // Programme for addition of n numbers
    int n;
    cout<<"Enter number to add numbers upto it :";
    cin>>n;
    int sum;
    sum = n*(n+1)/2;
    cout<<"THe sum of all numbers upto "<<n<<" is "<<sum<<endl;
    return 0;
}