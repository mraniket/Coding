#include <iostream>
using namespace std;
class BaseClass
{
    public:
        int var_base;
        void display()
        {
            cout << "Displaying Base Class Variable var_base " << var_base << endl;
        }
};
class DerivedClass : public BaseClass
{
    public:
        int var_derived;
        void display()
        {
            cout << "Displaying Base Class Variable var_base " << var_base << endl;
            cout << "Displaying Base Class Variable var_derived " << var_derived << endl;
        }
};
int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; //pointing base class pointer to derived class
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134; //will throw an error
    base_class_pointer->display();
    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 68;
    derived_class_pointer->display();

    // Base class pointers can point derived class obj..but the function of base class will execute only 


    return 0;
}