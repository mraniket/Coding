//a  number whos sum of cubes of all digits is equal to that number is a armstrong number
#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0, t;
    cout << "Enter a numver" << endl;
    cin >> n;
    t = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    if (t == sum)
    {
        cout << "Armstrong numbert" << endl;
    }
    else
    {
        cout << "not armstrong" << endl;
    }
    /////hello world without semicoloun;
    if (cout << "Hello World \n")
    {
    }
}