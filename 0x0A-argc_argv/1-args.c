#include<stdio.h>

/**
 * main - print the number pf arguments
 * @argc: the number of arguments
 * @argv: an array of pointer
 *
 * Return: Always 0
 */

int kmain(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc -1);

	return (0);
}
