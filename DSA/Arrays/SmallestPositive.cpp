// Find the smallest positive number missing from array.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int p;
    cin >> p;

    int arr[p];
    for(int i = 0; i<p; i++){
        cin>>arr[i];
    }

    const int N= 1e6;
    // int N = 100;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = 0;
    }


    for (int i = 0; i < N; i++)
    {
        /* code */
        if(arr[i] >= 0){
            check[arr[i]] = 1;
        }
    }
    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if(check[i]  == 0){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;    


    return 0;
}

// Programme is with the segmentation fault error