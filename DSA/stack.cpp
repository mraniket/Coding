#include<iostream>
using namespace std;

#define n 100


class stack{
    int arr[n];
    int top;

    public:
    stack(){
        int arr;
        top = -1;
        
    }
    void push(int x){
        if (top == n-1){
            cout<<"stack overflow"<<endl;
            return;
        }

        top++;
        arr[top ]= x;
    }

    void pop(){
        if(top == -1){
            cout<<"No element to pop"<<endl;
            return;
        }

        top--;
    }

    int Top()
    {
        if(top == -1){
            cout<<"No element in stack to pop"<<endl;
            return -1;
        }

        return arr[top];
    }

    bool empty(){
        return top == -1;
    }
};

int main(){

    stack st;
    cout<<"pushing element into stack"<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<"Showing top most element into stack"<<endl;
    cout<<st.Top()<<endl;
    cout<<"removing top most element into stack"<<endl;
    st.pop();
    cout<<"showing  top most element into stack"<<endl;
    cout<<st.Top()<<endl;
    cout<<"removing all element into stack"<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<"is the stack is empty or not"<<endl;
    cout<<st.empty()<<endl;;




    return 0; 
}