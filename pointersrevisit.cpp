#include <iostream>
using namespace std;

int main()
{
    //my code here
    int a = 4;
    int *ptr = &a;

    cout <<" the address  of a is " <<ptr<<endl;
    cout <<" the value of a is " <<*(ptr)<<endl;


    //new keyword
    int *p = new int(40);
    cout <<" the value address p is " <<*(p)<<endl;
    cout <<" the address  of a is " <<p<<endl;

//new operator
    int* arr = new int[3];
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    /* delete[] arr; */
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;

    //delete operator

    return 0;
}