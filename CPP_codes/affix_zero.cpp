#include<iostream>
using namespace std;

int main(){

    int m, n;
    cin>>m;
    cin>>n;

    for(int i = m; i<=n; i++){
        if(i<=100)
            printf("%03d ", i);
        // else if(i<100 && i>10)
        //     printf("%03d ", i);
        else
        printf("%d", i);

        
        // if(i<=10)
        //     printf("%03d ", i);
        // else if(i<100 && i>10)
        //     printf("%03d ", i);
        // else
        // printf("%d", i);
    }
return 0;
}