#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;


        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;

        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main() {
    Employee aniket;
    // aniket.a = 452; //we cant access this directly as it is declared private
    aniket.d = 89;
    aniket.setData(1,2,4);
    // aniket.getData();
    return 0;
}