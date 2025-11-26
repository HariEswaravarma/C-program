//Write a c program to print the following pattern
#include<stdio.h>
int main()
{
	int i,j;
	printf("enter the number of rows");
	scanf("%d",&n);
	for(i=-n+1;j<=n;i++)
	{
		for(j=-n+1;j<n;j++)
		{
			num = abs(i)>abs(j)?abs(i):abs(j);
		}
	}
	printf("\n");
}
