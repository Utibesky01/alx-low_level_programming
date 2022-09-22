#include "main.h"

/**
 * string_toupper-> converting any string to upper case
 * @x: string param
 * Return: string
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] > 96 && x[i] <= 123)
			x[i] -= 32;
		i++;
	}
	return (x);
}
