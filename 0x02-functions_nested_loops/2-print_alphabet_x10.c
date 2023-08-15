#include <stdio.h>
/*
 * main - print 10x the alphabet, in lowercase, followed by a new line
 * return: Always 0
 */
void print_alphabet_x10(void)
{
	char ch = "abcdefghijklmnopqrstuvwxyz";

	for (i = 1; i <= 10; i++)
	{
		putchar(ch);
	}
	putchar('\n');
}
