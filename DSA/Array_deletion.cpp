#include<iostream>
using namespace std;


void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" | ";
    }
    cout<<endl;
     
}
void indDeletion(int arr[], int size, int index){
    for (int i = index; i < size -1; i++)
    {
        arr[i]=arr[i+1];
    }
    
}
int minMaxNo(int arr[], int size){
    int maxNo = arr[0];
    int minNo = arr[0];

    for(int i = 0; i< size; i++){
        if(arr[i]>maxNo){
            maxNo = arr[i];
        }
        if(arr[i]<minNo){
            minNo = arr[i];
        }
    }
        cout<<maxNo<<endl;
        cout<<minNo<<endl;
    return 0;
}


int main(){
    int arr[100] = {7, 8, 14, 25, 14};
    int size = 5;
    //display(arr, 5);
    int index = 2;
    indDeletion(arr, size, index);
    size = size - 1;
    //display(arr, size);

    minMaxNo(arr, size);


}