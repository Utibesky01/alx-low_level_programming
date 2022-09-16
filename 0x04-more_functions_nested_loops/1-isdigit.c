#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: digit to be checked
 * Return: 1 if c is is a digit, otherrwise 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
