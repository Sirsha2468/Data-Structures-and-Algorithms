#include <stdio.h>
#include <conio.h>
int main()
{
    int A[] = {2, 8, 6, 10, 12, 456, 24, 645, 4, 5465, 7, 5, 0, 1, 8}; // Creating an array
    int i;                                                            // For index
    bubble_sort(A, 15);                                               // Calling bubble sort function and passing Array and the size of array
    for (i = 0; i < 15; i++)
    {
        printf("\n%d", A[i]);
    }
    return 0;
}
void bubble_sort(int A[], int N) // Function definition || Array and a variable
{
    int round, i, temp;
    // Step 1
    for (round = 1; round <= N - 1; round++)
        for (i = 0; i <= N - 1 - round; i++)
            // Comparison
            if (A[i] > A[i + 1]) // If left value is greater then we will do the swaping
            {
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
}
