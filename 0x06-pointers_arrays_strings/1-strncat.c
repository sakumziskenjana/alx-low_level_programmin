#include"main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The lomit of the concatenation
 *
 * Return: A ponter to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
