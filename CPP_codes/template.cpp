#include <iostream>
using namespace std;

class construct{

    int c;
    
    public:
    int a, b;
    construct(int x, int y){
        a = x;
        b = y;
    }

    void displayAdd(){
        c = a + b;
        cout<<c<<endl;
    }

};
int main(int argc, char const *argv[])
{
    construct a(5, 6);
    a.displayAdd();
    /* code */
    return 0;
}
