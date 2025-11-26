
// write a c program to calculate the lcm given two numbers using recurssion
#include <stdio.h>
int main ()
{
	int n1,n2,result;
	printf("\n enter two intger numbers");
	scanf("%d%d",&n1,&n2);
	if (n1>n2)
	 result = lcm(n1,n2);
	 else 
	 result = lcm(n1,n2);
	 printf("\n lcm is %d",result);
}
int lcm(int a, int b)
{
	static int temp=0;
	temp=temp+b;
	if(temp%a==0 && temp%b==0)
	return temp;
	else 
	return lcm(a,b);
}
	
	
	
	
	
	
	
	
	

