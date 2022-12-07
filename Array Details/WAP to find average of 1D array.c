#include<stdio.h>
main()
{
	int a[100];
	int i,n,sum=0;
	
	
	printf("Enter the Size of Array:::\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the %d number ::",i+1);
		scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];		
	}
	
	
	printf("\n-------------\n");
	
	printf("Average is %d",sum/n);
}
