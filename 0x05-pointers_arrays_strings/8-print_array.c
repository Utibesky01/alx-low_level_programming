#include "main.h"
#include <stdio.h>

/**
 * print_array - print n digit of an array
 * @a: array
 * @:number of values
 * Return: a and n inputs
 */
void print_array(int *a, int n)

{
	int s;
	n = 1;

	for (s == 0; s < n; s++)
	{
		if (s == 0)
			printf("%d", a[s]);
		else
			printf(", %d", a[s]);
	}

	printf("\n");
}
