//Write a C program to read the factorial with recssion
#include <stdio.h>
int main()
{
	int n;
	printf("\n Enter any +ve integer number");
	scanf("%d",&n);//
	
	printf("Factorial is %d",fact (n));
}
int fact(int x)
{
	if(x==1)
	return x;
	else
	    return x * fact(x-1);
}
