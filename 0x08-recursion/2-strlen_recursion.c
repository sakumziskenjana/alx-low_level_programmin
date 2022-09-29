#include"main.h"

/**
 * _strlen_recursion - Calculate the length of a string
 * @s: The string to count
 *
 * Return: longer value
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s + 1);
}
