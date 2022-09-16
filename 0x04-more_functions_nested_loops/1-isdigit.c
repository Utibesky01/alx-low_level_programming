#include "main.h"
/**
 * _isdigit - checks if a character is a digit or not
 * @c:character tested
 */

int _isdigit (int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
