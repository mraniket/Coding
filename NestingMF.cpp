
// Classes and Objects

// c++ --> initially called --0> c with classes
// class  --> extension of structer (in c)
//  structure had limitation
//    --> members are public
//    -->  No methods
// classes --> are structures + more
// classes --> can have methods and propereties
// classes --> can make few members as private & few as public
// structers in c++ are typedef
// you can declare objects along with the clas declaration
/* class Employee
        {
            class defination
        } Aniket, rohan, lovish;
     */
// aniket.salary = make no senseif salary is privvate

/* ********* Nesting of Member Function  ******* */

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void ones_comp(void);
};

void binary ::read(void)
{

    cout << "enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
        else
        {
            cout << "Correct format" << endl;
        }
    }
}

void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::ones_comp(void)
{
    cout << "Display ones compleent" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;
    b.read();
    b.chk_bin();
    b.ones_comp();
    b.ones();
    b.ones_comp();

    return 0;
}