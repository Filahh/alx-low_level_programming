#include "main.h"
/*
 * main - print 10x the alphabet, in lowercase, followed by a new line
 * Description: print 10x the alphabet
 * return: Always 0
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
