#include "main.h"
/*
 * 1_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Description: prints alphabet
 * return: Always 0
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
