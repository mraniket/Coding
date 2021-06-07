#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j]; //ye step me j position wala element aage karva diya
                                 //j ki position to wahi pe hain to use aur ek step piche laao
                                 //taki wo current ke ek step piche chali jaye
            j--;
        }
        arr[j + 1] = current;
    }

    //now to print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " | ";
    }
    cout << endl;

    return 0;
}