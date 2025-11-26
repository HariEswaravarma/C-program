#include<stdio.h>
int main ()
{
	int mat[3][3],tmat[3][3],i,j;
	printf("\nEnter the elements of matrix");
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++);
	  {
	  	scanf("%d", &mat[i][j]);
	  }
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tmat[i][j] = mat[i][j];
		}
	}
	printf("\nThe transposition of a given matrix is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d", tmat[i][j]);
		}
	}  print("\n");  
}