#include <stdio.h>

/**
 * main - Prints all possible combination of single-digit numbers.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	for (n = 97; n < 103; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

