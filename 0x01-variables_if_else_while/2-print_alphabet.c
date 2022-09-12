#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int man(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	prinfg("\n");

	return (0);
}
