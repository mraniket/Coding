// find the subarray with the given sum
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cout<<"Enter size and Sum "<<endl;
    cin>> n >> s;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int i=0, j=0, start=-1, end=-1, sum=0;

    while(j<n && sum+arr[j] <= s){
        sum += arr[j];
        j++;
    }
    if(sum == s){
        cout<<"Starting and ending index of subarray"<<i+1<<" "<<j<<endl;
        return 0;
    }
    while (j<n)
    {
        sum += arr[j];
        while(sum>s){
            sum -= arr[i];
            i++;
        }
        if(sum == s){
            start = i+1;
            end = j+1;
            break;
        }
        j++;
    }
    cout<<"Starting and ending index of subarray"<< start << " " << end <<endl;
    return 0;
}