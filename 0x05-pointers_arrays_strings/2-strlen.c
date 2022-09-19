#include "main.h"

/**
 * _strlen -> function to get the lenght of a string
 * @s: string pointer to passed to this function
 * Return: return lenght of the string
 */

int _strlen(char *s)
{
	int len;

	while  (*(s + len) != '\0'; s++)
	{
		len += 1;
	}

	return (len);
}
