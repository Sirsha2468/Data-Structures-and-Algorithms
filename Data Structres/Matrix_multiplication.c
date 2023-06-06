#include<stdio.h>
#include<stdlib.h>
int main() {
	int a[2][2], b[2][2], d[2][2], r, c, k, sum;
	printf("\n Enter 4 numbers for 1st matrix: ");
	for(r = 0; r <= 1; r++) 
	for(c = 0; c <= 1; c++)
	scanf("%d", &a[r][c]);
	prinf("Enter 4 numbers for 2nd matrix: ");
	for(r=0; r<=1;r++)
	for(c=0; c<=1; c++)
	scanf("%d", &b[r][c]);
	for(r=0; r<=1; r++)
	{
	for(c=0; c<=1; c++) {
		sum = 0; // For taking garbage value in it
		for(k = 0; k <=1; k++)
		sum = sum + a[r][k]*b[k][c];
		d[r][c] = sum;
	}
}
	for(r=0; r<=1; r++) {
		for(c=0; c<=1; c++)
			printf("%d\n", d[r][c]);
	}
	return 0;
}
