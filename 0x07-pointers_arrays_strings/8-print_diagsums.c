#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the matrix array
 * @size: Size of the matrix (number of rows/columns)
 *
 * Description: This function calculates the sum of the main diagonal and the
 *              secondary diagonal of a square matrix and prints the results.
 *              The matrix is represented as a one-dimensional array.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;	/* Sum of the main diagonal */
	int sum2 = 0;	/* Sum of the secondary diagonal */
	int i, j;

	/* Calculate the sums of the diagonals */
	for (i = 0; i < size; i++)
	{
		/* Calculate the sum of the main diagonal elements */
		sum1 += a[i * size + i];

		/* Calculate the sum of the secondary diagonal elements */
		sum2 += a[i * size + (size - 1 - i)];
	}

	/* Print the sums of the diagonals */
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
