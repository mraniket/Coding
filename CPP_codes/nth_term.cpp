#include <stdio.h>

int oddVals(int n)
{
    int i;
    int val = 1;
    for (i = 2; i <= n; i++)
    {
        val = val * 2;
    }
    return val;
}
int evenVals(int n)
{
    int i;
    int val = 1;
    for (i = 2; i <= n; i++)
    {
        val = val * 3;
    }
    return val;
}
int main()
{
    int n;
    printf("enter value of n to find nth number in series:");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d", evenVals(n/2));
    }
    else
    {
        printf("%d", oddVals(n/2+1));
    }
}