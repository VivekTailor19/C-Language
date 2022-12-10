//Print Anti-Diagonal Elements Sum in 2D array
#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,n,sum;
	
	printf("Enter the Array Size ::");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]==",i,j);
			scanf("%d",&a[i][j]);	
		}
	}
	
	printf("\t========Array is ======\n\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");	
	}
	printf("\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(n-1==i+j)
			{
			sum=sum+a[i][j];
			}	
		}
	}	
	printf("\nAnti-Diagonal Elements Addition is ==>>%d\t",sum);
}
