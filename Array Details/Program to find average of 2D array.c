//Program to find average of 2D array
#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,ni,nj,sum,len;
	
	printf("Enter the Row Size ::");
	scanf("%d",&ni);
	printf("Enter the Column Size ::");
	scanf("%d",&nj);
	
	for(i=0;i<ni;i++)
	{
		for(j=0;j<nj;j++)
		{
			printf("a[%d][%d]==",i,j);
			scanf("%d",&a[i][j]);	
		}
	}
	
	printf("\n\n========Array======\n\n");
	for(i=0;i<ni;i++)
	{
		for(j=0;j<nj;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");	
	}
	printf("\n\n");
	
	
	for(i=0;i<ni;i++)
	{
		for(j=0;j<nj;j++)
		{
			sum=sum+a[i][j];
		}	
	}
	len=ni*nj;
	printf("Average of All array elements==>>%d",sum/len);
	
}
