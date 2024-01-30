#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 48; m++)
		{
			if (n < m)
			{
				for (l = 48; l < 58; l++)
				{
					if (m < l)
					{
						putchar(n);
						putchar(m);
						putchar(l);
						if (n < 56)
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
