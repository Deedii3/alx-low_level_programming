#include "main.h"

/**
 * print_most_numbers - prints 0-9 but without 2 amd 4
 * Return: no return
 */
void print_most_numbers(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		if (j != 50 && j != 52)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
