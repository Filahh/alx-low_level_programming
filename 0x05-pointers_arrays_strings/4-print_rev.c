#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 *
 * Return: always 0
 */
void print_rev(char *s)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		s++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
