/******** C program to print the below pattern

  0
  2 4
  6 8 10 
  12 14 16 18 
  20 22 24 26 28

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num,val,k=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k = k + 2;
		}
		printf("\n");
	}
	return 0;
}

