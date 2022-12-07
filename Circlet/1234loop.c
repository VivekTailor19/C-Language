#include<stdio.h>
main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=5;k>i;k--)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(i=2;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=5;k>i;k--)
		{
			printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
/*
1234554321
1234  4321
123    321
12      21
1        1
12      21
123    321
1234  4321
1234554321
*/
