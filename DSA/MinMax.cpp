#include <iostream>
using namespace std;

// Pair struct is used to return two values from getMinMax
struct Pair
{
    int min;
    int max;
};
struct Pair getMinMax(int arr[], int n){
    struct Pair minmax;
    int i;

    //if there is only one element then return itseld as min and max
    if( n == 1){
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    //if there are more than one element , then initialize min and max
    if(arr[0] > arr[1]){
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else{
        minmax.max = arr[1];
        minmax.min = arr[0];

    }

    for ( i = 2; i < n; i++)
    {
        if(arr[i] > minmax.max)
            minmax.max = arr[i];

        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
    }
    return  minmax;
    
}

// Driver Code
int main()
{
    int arr[] = {1, 2, 5, 6, 100, 0};
    int arr_size = 6;
    struct Pair minmax = getMinMax(arr, arr_size);
    cout<<"Minimun Value is "<<minmax.min<<endl;
    cout<<"Maximum value is "<<minmax.max<<endl;
    return 0;
}