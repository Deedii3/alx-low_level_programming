#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: The character in ASCII code
 *
 * Return: returns 1 if in lowercase but 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
