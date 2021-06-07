// #A structure in C++ is a group of data elements grouped
// together under one name. THese data elements,known as mmemebers,
//  can have diffrent types and diffrent lengths.
//  it is user defined data type which allows you to combine
//  data items of diffrent kinds.

//  #Structure are user defined data types

#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    double salary;
    /* data */
};

int main()
{
    Person p1, p2;
    cout << "Person Details" << endl
         << "Enter person Name" << endl;
    cin >> p1.name;
    cout << "Person Name " << p1.name << endl;
    cout << "Person 2 Detail" << endl
         << "Enter person 2 Name" << endl;
    cin >> p2.name;
    cout << "Person Name " << p2.name << endl;

    return 0;
}