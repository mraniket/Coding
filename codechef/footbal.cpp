#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n; // no of players
	    cin >> n;
	    int A[n], B[n];
	    int max = -999999;
        cout<<"enter A array";
	    for(int i = 0; i < n; i++){
	        cin >> A[i];
	    }
	    cout<<endl;
        cout<<"enter B array";
	    for(int i = 0; i < n; i++){
	        cin >> B[i];
	    }
	    cout<<endl;
	    
	    for(int i = 0; i < n; i++){
	        int score = A[i]*20 - B[i]*10;
	        if(score < 0){
	            score = 0;
	        }
	        if(max < score){
	            max = score;
	        }
	    }
	    cout << max << endl;
	}
	return 0;
}