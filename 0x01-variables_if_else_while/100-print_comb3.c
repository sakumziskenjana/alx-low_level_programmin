#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int d;

	fo(d = '0'; d < 100; d++)
	{
		putchar ((d / 10) + '0');
		putchar ((d % 10) + '0');
		if (d != 99)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');

	return (0);
}
