//write a c program to finging the elements in linear search
#include<stdio.h>
int main()
{
	int a[10],i,target,found=0;
	printf("\nEnter any 10 integer numbers");
	for(i=0;i<10;i++)
	     scanf("%d",&a[i]);
	printf("\nEnter an element to be searced");
	   scanf("%d",& target);
	for(i=0;i<10;i++)
	{
		if(target == a[i])
		{
			found=1;
			break;
		}
		
	}
	if	(found==1)
	{
		printf("Element %d nis found ", target);
		else
		printf("Element %d is not found",target);
	
	}
}
