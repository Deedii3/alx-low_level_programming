#include <stdio.h>

/**
 * main - Omit q and e im the alphabet
 *
 * Return: Always returns 0 (succesx)
 */
int main(void)
{
	char alp [24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
