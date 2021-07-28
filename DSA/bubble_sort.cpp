#include <iostream>
using namespace std;

int main()
{
    long n;
    cin >> n;
    long arr[n];
    for (long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
// Bubble Sort
    long counter = 0;
    while (counter < n-1)
    {
        for (long i = 0; i<n-counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                long temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    for (long i = 0; i < n; i++)
    {
        cout << arr[i] << "|";
    }
    cout << endl;

    return 0;
}