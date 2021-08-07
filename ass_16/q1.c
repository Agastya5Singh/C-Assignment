//first 3 Question are done in this single program
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n],x,y;
	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j < n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j>=i&&i+j>=n-1)
				printf("%d ",a[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j<=i&&i+j<=n-1)
				printf("%d ",a[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j>=i&&i+j<=n-1)
				printf("%d ",a[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j<=i&&i+j>=n-1)
				printf("%d ",a[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i+j<=n-1)
				printf("%d ",a[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i+j>=n-1)
				printf("%d ",a[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i>=j)
				printf("%d ",a[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<=j)
				printf("%d ",a[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
	return 0;
}
