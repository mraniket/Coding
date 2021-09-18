#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int a[100],i,n,j,sum;
	
	printf("Input :\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=a[i];
		for(j=i+1;j<n;j++)
		{
			sum=sum+a[j];	
		}
		if(sum==0)
		{
			printf("Output :\n1");
			break;
		}
	}
	if(sum!=0)
	printf("Output :\n0");
	return 0;
}
