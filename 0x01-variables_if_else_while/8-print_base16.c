#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (m = 97; m < 103; m++)
	{
		putchar(m);
	}
	putchar ('\n');

	return (0);
}
