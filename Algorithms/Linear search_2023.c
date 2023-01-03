#include<stdio.h>

int main() 
{
	int array[10], search, i, n, count = 0;
	
	printf("Enter number of elements to search: ");
	scanf("%d", &n);
	
	printf("\nEnter %d elements: ", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &array[i]);
	}
	
	printf("\nEnter a number to search: ");
	scanf("%d", &search);
	
	for(i=0; i<n; i++)
	{
		if(array[i] == search)
		{
			printf("\n%d element found at location %d", search, i+1);
			count++;
		}
	}
	if(count == 0)
	{
		printf("\n%d is not present in the array", search);
	}
	else 
	printf("\n%d is present %d times in the array", search, count);
	
	return 0;
}
