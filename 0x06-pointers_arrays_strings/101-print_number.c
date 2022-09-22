#include "main.h"

/**
 * print_number - print any integer with putchar
 * @n: number to print
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
