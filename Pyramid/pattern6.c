#include<stdio.h>
int main()
{
	int i,j,n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j||i+j==n+1)
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
}