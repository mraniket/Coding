#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " | ";
    }
    cout << endl;
}

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    //Unsorted array for the linear search./
    // int arr[] = {1, 2, 4, 5, 7, 5, 57, 877, 4, 85, 5};
    // int size = sizeof(arr) / sizeof(int);

    //Sorted array for the linear search./
    int arr[] = {1, 2, 4, 5, 7, 55, 57, 877, 74, 85, 95};
    int size = sizeof(arr) / sizeof(int);
    int element = 55;
    // int searchindex = linearSearch(arr, size, element);
    int searchindex = binarySearch(arr, size, element);
    display(arr, size);
    cout << "element " << element << " found at index " << searchindex << endl;

    return 0;
}