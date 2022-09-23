#include"main.h"
#include<stdio.h>

/**
 * _strcat - combines two strings together
 * @dest: The destination of the string
 * @src: The source string
 *
 * Return: A pointe to the resulting string destination
 */

char *_strcat(char *dest, char *src)
{
	int dlen = c, c2;

	c = 0

	while (dest[c])
	{
		c++;
	}

	for (c2 = 0; src[c2] ; c2++)
	{
		dest[c++] = src[c2];
	}

	return (dest);
}
