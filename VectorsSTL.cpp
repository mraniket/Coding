#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    vector<int> vec1;
    int element;
    int size;
    cout<<"Enter The size of vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        
        cout<<"Enter an elemenr to add this vector"<<endl;
        cin>>element;
        vec1.push_back(element);
    }
       // vec1.pop_back();
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1, 5, 566);
    display(vec1);
    return 0;
}