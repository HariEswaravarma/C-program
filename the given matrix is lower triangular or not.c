//Write a c program to print weather the given matrix is lower triangular or not
#include<stdio.h>
int main()
{
	int lt[3][3],i,j,flag=1;
	printf("\nEnter the element of matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&lt[1][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i<j && lt[i][j]) ||(j<=1 && lt[i][j]==0))
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
		printf("\nThe given matrix is lower trianglar matrix");
	else
		printf("\nThe given matrix is not lower trianglar matrix");
}



