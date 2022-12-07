#include<stdio.h>
main()
{
	int a[100];
	int i,n,sum=0;
	int avg;
	
	printf("Enter the Size of Array:::\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the %d number ::",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\n\nUser total Enter %d number in Array",n);	
}
