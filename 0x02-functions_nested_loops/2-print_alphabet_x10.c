#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0, m;

	while (n < 10)
	{
		m = 97;

		while (m <= 122)
		{
			putchar(m);
			m++;
		}

		putchar('\n');
		n++;
	}
}
