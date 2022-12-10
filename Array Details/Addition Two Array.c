#include<stdio.h>
main()
{
	int a[100][100],b[100][100],c[100][100];
	int i,j,n,sum=0;
	
	printf("Enter the Array Size ::");
	scanf("%d",&n);
	
	printf("== Enter First Array =\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]==",i,j);
			scanf("%d",&a[i][j]);	
		}
	}
	printf("== Enter Second Array =\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("b[%d][%d]==",i,j);
			scanf("%d",&b[i][j]);	
		}
	}
	printf("\n");
	
	printf("\n========First Array======\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");	
	}
	printf("\n");
	printf("\n========Second Array======\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");	
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}	
	}
	
	printf("\n\n===== New Additional Array ======\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");	
	}
}
