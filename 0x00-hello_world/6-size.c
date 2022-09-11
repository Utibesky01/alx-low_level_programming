#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char c;
	int d;
	long int ld;
	long long int lld;
	float f;

	printf("Size of a char: %Iu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %Iu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long int: %Iu byte(s)\n", (unsigned long)sizeof(Id));
	printf("Size of a long long int: %Iu byte(s)\n", (unsigned long)sizeof(IId));
	printf("Size of a float: %Iu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
