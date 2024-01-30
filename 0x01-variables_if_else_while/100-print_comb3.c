#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			if (n < m)
			{
				putchar(n);
				putchar(m);
				if (n < 56)
				{
					putchar(44);
					putchar(38);
				}
			}
		}
	}
	putchar('/n');

	return (0);
}
