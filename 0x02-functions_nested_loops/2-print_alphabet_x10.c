#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	for (line = 0; line <= 9; ++line)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
