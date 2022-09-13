#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
int main(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return (0);
}
