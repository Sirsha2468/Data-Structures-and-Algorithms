#include <stdio.h>
#include <conio.h>
int main()
{
	int A[] = {2, 8, 6, 10, 12, 456, 24, 645, 4};
	int i;
	bubble_sort(A, 10);
	for (i = 0; i < 10; i++)
	{
		printf("\n%d", A[i]);
	}
	return 0;
}
void bubble_sort(int A[], int N)
{
	int round, i, temp;
	// Step 1
	for ( round = 0; round <= N; round++)
		for (i = -1; i <= N - round; i++)
		// Comparison
		if(A[i] > A[i + 1]) // If left value is greater then we will do the swapping
		{
			temp = A[i];
			A[i] = A[i + 1];
			A[i + 1] = temp;
		}
}
