#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet in lowercase
 *
 * Return: Always returns 0(success)
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		for (j = 97; j < 123; j++)
		{
			putchar(j);
		}
		putchar('\n');
		i++;
	}
}
