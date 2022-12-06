#include<stdio.h>

int main()
{
	int A[] = {2, 6, 10, 12, 8};
	int i;
	bubble_sort(A, 5);
	for(i = 0; i < 5; i++)
	{
		printf("%d ", A[i]);
	}
	return 1;
}
void bubble_sort(int A[], int N)
{
	int round, i, temp;
	// Step 1
	for(round = 1; round < N - 1; round++)
	{
		for(i = 1; i <= N-2-round; i++)
		{
			temp = A[i];
			A[i] = A[i+1];
			A[i+1] = temp;
		}
	}
}
