#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=5;i>=1;i--)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		for(j=i;j<5;j++)
		{
			printf("%d",j+1);
		}
		printf("\n");
		
	}
}
/*
 
    5
   545
  54345
 5432345
543212345

*/
