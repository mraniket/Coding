// car hiring cost for n hour is R1 rs and after that R2 rs \
// find the total cost of travel
// timing is given into minutes , 
// 1.5 hr will considered as 2 hour.
#include<bits/stdc++.h>
using namespace std;

int main(){

    int R1, N, R2, X;
    cin>>R1>>N>>R2>>X;

    int hour = ceil(X/60.0);
    int first = N*R1;
    int rem_time = hour - N;
    int second = rem_time*R2;

    cout<< first+second <<endl;

    return 0;

}