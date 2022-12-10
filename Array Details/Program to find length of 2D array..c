//Program to find length of 2D array.
#include<stdio.h>
main()
{
	int a[100][100];
	int ni,nj,len;
	
	printf("Enter the Row Size ::");
	scanf("%d",&ni);
	printf("Enter the Column Size ::");
	scanf("%d",&nj);
	
	
	printf("\n\n========Array======\n\n");
	
	len=ni*nj;
	
	printf("The Length of Array is ==>>%d",len);
	
}
