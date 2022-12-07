#include<stdio.h>
main()
{
	int a[100];
	int i,n;
	
	printf("Enter the Size of Array:::\n");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		printf("Enter the %d number ::",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\n-------------\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
