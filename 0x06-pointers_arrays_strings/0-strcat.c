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
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for i = 0; src[i] != 0; i++;
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
