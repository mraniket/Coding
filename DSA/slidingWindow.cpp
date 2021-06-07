//Minimum Subarray size of sum greater than X
#include <iostream>
using namespace std;

int smallestSubarrayWithsum(int arr[], int n, int x)
{
    int sum = 0, minLength = n + 1, start = 0, end = 0;
    while (end < n)
    {
        while (sum <= x && end < n)
        { // whenever the value of x becomes greater
            // we will jump out of the loop
            sum = sum + arr[end++];
        }

        while (sum > x && start < n)
        { // till our sum is greatr than x

            if (end - start < minLength)
            { // update minlength if minlength is smaller
                // then our predefined minlength
                minLength = end - start;
            }
            sum = sum - arr[start++]; // remove the start element from the sum
                                      // still satisfy while loop condition
        }
    }
    return minLength;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n = 6;

    int minLength = smallestSubarrayWithsum(arr, n, x);

    if (minLength == n + 1)
    {
        cout << "no such subarray" << endl;
    }
    else
    {
        cout << "Smallest length subaarray is: " << minLength << endl;
    }
// changes to test gihub 
    return 0;
}