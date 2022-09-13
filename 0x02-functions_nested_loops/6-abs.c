#include "main.h"

/**
 * _abs - computes the absolutes value of an integer
 * @n: integer whose absolute value to find
 *
 * Return: int
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
