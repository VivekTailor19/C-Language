#include<stdio.h>
main()
{
	int a[100],b[100],c[100];
	int i,n,sum=0;
	
	
	printf("Enter the Size of Array:::\n");
	scanf("%d",&n);
	//printf("Enter the Size of Second Array:::\n");
	//scanf("%d",&n2);
	
	printf("\n....The First Array Values....\n\n");
	for(i=0;i<n;i++)
	{
		printf("Enter Value the %d number ::\t",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\n....The Second Array Values....\n\n");
	for(i=0;i<n;i++)
	{
		printf("Enter Value the %d number ::\t",i+1);
		scanf("%d",&b[i]);
	}	
	printf("\n\n-------------\n\n");
	
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];	
		
	}
	
	for(i=0;i<n;i++)
	{
		printf("sum index %d is %d\n",i+1,c[i]);
	}
}
