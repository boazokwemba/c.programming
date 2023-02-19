#include<stdio.h>
int main()
{
	int p[3][4];
	int f[3][4];
	int i,j;
	int sum[i][j];
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	{
		printf("\nEnter velues for 1st matrix\n");
		scanf("%d",&p[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d",p[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	{
	printf("Enter the value of 2nd matrix");
	scanf("%d",&f[i][j]);
}
    for(i=0;i<3;i++)
    {
    	for(j=0;j<4;j++)
    	printf("%d",f[i][j]);
    	printf("\n");
	}
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	printf("\n added matrix\n");
	{
		sum[i][j]=p[i][j]+f[i][j];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		printf("%d",sum);
		printf("\n");
	}
	return 0;
}
