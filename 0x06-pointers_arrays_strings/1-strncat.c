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
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = src[j];
		i++;
		j++;
	}

	return (dest);
}
