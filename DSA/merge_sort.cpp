#include <iostream>
using namespace std;

// void merge(int arr[], int l, int mid, int r)
// {
//     int n1 = mid - l + 1;
//     int n2 = r - mid;

//     int a[n1];
//     int b[n2];

//     for (int i = 0; i < n1; i++)
//     {
//         a[i] = arr[l + i];
//     }

//     for (int i = 0; i < n2; i++)
//     {
//         b[i] = arr[mid + 1 + i];
//     }

//     int i = 0;
//     int j = 0;
//     int k = l;

//     while (i < n1 && j < n2)
//     {
//         if (a[i] < b[j])
//         {
//             arr[k] = a[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             arr[k] = b[j];
//             k++;
//             j++;
//         }
//     }

//     while (i < n1)
//     {
//         arr[k] = a[i];
//         k++;
//         i++;
//     }

//     while (j < n2)
//     {
//         arr[k] = b[j];
//         k++;
//         j++;
//     }
// }

// void mergeSort(int arr[], int l, int r)
// {

//     if (l < r)
//     {
//         int mid = (l + r) / 2;
//         mergeSort(arr, l, mid);
//         mergeSort(arr, mid + 1, r);
//         merge(arr, l, mid, r);
//     }
// }

void merge(int A[], int mid, int low, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, mid, low, high);
    }
}

int main()
{

    int arr[] = {5, 4, 3, 2, 1};
    mergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
