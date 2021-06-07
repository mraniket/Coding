#include <iostream>
using namespace std;

int main()
{
    int n, r, sum = 0, t;
    cout << "Enter a number " << endl;
    cin >> n;
    t = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    cout << "The reverse of the string is " << sum << endl;
    if (t == sum)
    {
        cout << "Palimdrome number" << endl;
    }
    else
    {
        cout << "Not a palindrome" << endl;
    }
}