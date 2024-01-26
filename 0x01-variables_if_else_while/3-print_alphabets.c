#include <stdio.h>

/**
 * main - prints alphabets in lower and upper cases
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		putchar(n);
	}
	for (n = 65; n < 91; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}

