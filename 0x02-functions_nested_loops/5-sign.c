#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: Integer
 *
 * Return: 1(positive), 0(Zero) and -1(negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}
}

