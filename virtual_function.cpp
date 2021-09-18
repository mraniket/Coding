/* 
As of pointers to derived class when we create base class pointer the function on base class will run only 
either we points base classs object or derived class object

But in virtual function Our moto is to run the function of Derived class when we create the base class pointer 
 */

#include <iostream>
using namespace std;
class BaseClass
{
    public:
        int var_base = 1;
       virtual void display()  //here we created this function Virtual
        {
            cout << "1 Displaying Base Class Variable var_base " << var_base << endl;
        }
};
class DerivedClass : public BaseClass
{
    public:
        int var_derived = 1;
        void display()
        {
            cout << "2 Displaying Base Class Variable var_base " << var_base << endl;
            cout << "2 Displaying Base Class Variable var_derived " << var_derived << endl;
        }
};
int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; //pointing base class pointer to derived class
    // base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134; //will throw an error
    base_class_pointer->display();
    base_class_pointer = &obj_base;
    base_class_pointer->display();

/*     DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 68; 
    derived_class_pointer->display();*/

    // Base class pointers can point derived class obj..but the function of base class will execute only 


    return 0;
}

/* Polymorphism ka matlab kya hain

    Objects jo ki alag alag ki classes ko belong karte hain wo ek tarah ke msg ko respond kar rahe hain
    
 */