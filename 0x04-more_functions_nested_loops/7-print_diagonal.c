#include "main.h"

/**
 * print_diagonal - print diagonal line using "\" character of n lenght
 * @n: lenght of the line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	n = 1;

	i = 92

	if (n > 0)
	{
		_putchar(92);

		while (i < n)
		{

		
			int count = 0;

			_putchar('\n');
			while (count < i)
			{
				_putchar(' ');
				count++;
			}
			_putchar(92);
			i++;
			
		}
	}
	_putchar('\n');
}
