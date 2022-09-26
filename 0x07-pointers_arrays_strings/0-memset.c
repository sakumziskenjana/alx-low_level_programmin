#include"main.h"

/**
 * _memset - Frill memory with a constant byte
 * @s: The memory to fill
 * @b: Constant byte to fill
 * @n: Bytes of memory area to fill
 *
 * Return: The memory area to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
