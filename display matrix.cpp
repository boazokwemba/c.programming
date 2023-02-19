/*Boaz okwemba
  roll no:51
  cse 1/4 */
  
  
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int p[100][100],t[100][100];
	int i,j,m,n;
	printf("Enter the number of Rows and columns\n");
	scanf("%d%d",&m,&n);
	//for_inputing the elements of matrix 1
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		printf("\nEnter the values of 1st matrix\n");
		scanf("%d",&p[i][j]);
	}
	//for_printing the matrix 1
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d",p[i][j]);
		printf("\n");
	}
	printf("Enter number of rows and columns\n");
	scanf("%d%d",&m,&n);
	//for_inputing elements of matrix 2
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
		printf("\nEnter the values of 2nd matrix\n");
		scanf("%d",&t[i][j]);
		
	}
	//for_printing  matrix 2
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		printf("%d",t[i][j]);
		printf("\n");
	}
	
	return 0;
	
}
