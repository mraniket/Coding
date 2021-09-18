#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout<<"Enter the id"<<endl;
        cin >> id;
    }
    void getData(void)
    {
        cout<<"The id of the employee is "<<endl;
        cout << id <<endl;
    }
};

int Employee :: count; // default value is zero ie initialized from 0

int main()
{
    Employee aniket, Rohan, Love;

    aniket.setData();
    aniket.getData();

    Love.setData();
    Love.getData();

    Rohan.setData();
    Rohan.getData();
    return 0;
}