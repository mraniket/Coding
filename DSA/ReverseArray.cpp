#include<iostream>
using namespace std;

class India
{
    public:
    struct Bix
    {
        int   x;
        float y;
        void Function(void)
        {
            y = x = (x = 4*4); 
            // y = --y * y;
        }
        void Display()
        {
            cout<< y << endl;
        } 
    }B; 
}I; 
int main()
{
    I.B.Display(); 
    return 0;
}