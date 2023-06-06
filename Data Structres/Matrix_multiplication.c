#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[10][10], b[10][10], mul[10][10], r, c, k, i, j; 
	
	printf("Enter the number of rows:\n");
	scanf("%d", &r);
	
	printf("Enter the number of columns:\n");
	scanf("%d", &c);
	
	printf("\nEnter the 1st matrix elements:\n");
	
	for(i=1; i<=r; i++)
	{
		for(j=1; j<=c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\nEnter the 2nd matrix elements:\n");
	for(i=1; i<=r; i++)
	{
		for(j=1; j<=c; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	
	// Multiplication of the matrix
	printf("\nMultiplication of the matrix:\n");
	
	for(i=1; i<=r; i++)
	{
		for(j=1; j<=c; j++)
		{
			mul[i][j] = 0;
			
			for(k=1; k<= c; k++)
			{
				mul[i][j] += a[i][k]*b[k][j];
			}
		}
	}
//	Printing the result
	for(i=1; i<=r; i++) {
		for(j=1; j<=c; j++) {
			printf("%d\n", mul[i][j]);
		}
	}
	return 0;
}
