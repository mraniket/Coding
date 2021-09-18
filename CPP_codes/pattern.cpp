
#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cin>>r>>c;

    for(int i=0; i<r; i++){
        for(int j =0; j<c; j++){
            if(i==0 || j==0 || i==4 || j==4){
                cout<<"1"<<' ';
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}
