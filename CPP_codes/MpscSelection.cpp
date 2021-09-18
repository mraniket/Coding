#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3];
    int r,c;
    cin>>r>>c;
    for(int i=0; i<r; i++ ){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<r; i++ ){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    int avg[3] = {0};
    int max = 0;
    for(int i=0; i<r; i++ ){
        for(int j=0; j<c; j++){
            sum += arr[j][i];
        }
        avg[i] = sum/3;
        sum = 0;
    }
    for(int i=0; i<3; i++){
         if(avg[i]>max)
    		{
        			max = avg[i];
    		}
	}
    cout<<max;

    for(int i=0; i<3; i++)
	{
    		if(avg[i] == max)
    		{
        			printf("Trainee Number : %d\n",i+1);
    		}
    		if(avg[i]<70)
    		{
        			printf("Trainee is Unfit");
    		}
	}
	return 0;

    return 0;

}