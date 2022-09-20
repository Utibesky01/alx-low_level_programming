#include "main.h"
#define MAIN_H
#include <stdio.h>

/**
 * print_array - print n element of  
 * array of integers
 * @: pointer to array
 * @n: Number of array elements.
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
			printf("%d", a[i]);
			if (i != n - 1)
			{
				printf(",");
				printf(" ");
			}
	}
	printf("\n");
}
