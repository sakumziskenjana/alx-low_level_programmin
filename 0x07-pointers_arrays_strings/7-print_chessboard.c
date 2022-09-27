#include"main.h"
#include<stdio.h>

/**
 * print_chessboard - Print the chessboard
 * @a: the array of pieces
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; a[b][7]; b++)
	{
		for (c = 0; c < 8; c++)
			putchar(a[b][c]);

		 putchar('\n');
	}
}
