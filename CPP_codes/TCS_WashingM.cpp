//Washing machine weight and time calculation problem

#include<stdio.h>

void washingmachine(int n)
{
    if(n==0)
    {
        printf("Time Estimated: 0 Minutes");
    }
    else if(n>0 && n<=2000)
    {
        printf("Time Estimated: 25 Minutes");
    }
    else if(n>2000 && n<=4000)
    {
        printf("Time Estimated: 35 Minutes");
    }
    else if(n>4000 && n<=7000)
    {
        printf("Time Estimated: 45 Minutes");
    }
    else
    {
        printf("Invalid Input");
    }
}

int main()
{
    int weight;
    scanf("%d",&weight);
    
    washingmachine(weight);
    return 0;
}