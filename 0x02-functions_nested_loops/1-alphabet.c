#include <stdio.h>
/*
 * main- prints the alphabet, in lowercase, followed by a new line
 * return: Always 0
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('/n');
}
