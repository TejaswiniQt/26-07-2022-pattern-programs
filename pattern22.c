/******** C program to print the below pattern

  1
  3 5
  7 9 11 
  13 15 17 19 
  21 23 25 27 29

 ***************/

#include<stdio.h>

int main()
{
	int i,j,num,val,k=1;
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

