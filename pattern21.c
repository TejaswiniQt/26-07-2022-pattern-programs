/******** C program to print the below pattern

  0
  1 1
  0 0 0 
  1 1 1 1 
  0 0 0 0 0

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
			if(i%2 == 0)
				k = 1;
			else
				k = 0;
			printf("%d ",k);
		}
		printf("\n");
	}
	return 0;
}

