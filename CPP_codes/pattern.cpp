// 1
// 11
// 121
// 1331
// 14641


// 11 12 13 14
// 21 22 23 24
// 31 32 33 34
// 41 42 43 44


#include<iostream>
using namespace std;
int main(){

int i=1, j=1, n=2;
for(i=1; i<5; i++){
    for ( j = 1; j < 5; j++)
    {
        if(i==1 && j==1 || i==2 && j==2 || i==3 && j==3 || i==4 && j==4 )
        cout<<"1";
        else if(j==1)
        {
            cout<<"1";
        }
        else if(i>j && i==3)
        {
            cout<<n;            
            
        }
        else if(i==4 && i>j)
        {
            cout<<"3";            
            
        }
        
        cout<<" ";
    }
    cout<<endl;
    
}
}