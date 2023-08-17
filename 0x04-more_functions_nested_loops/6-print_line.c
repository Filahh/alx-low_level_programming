#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: a straight line
 * Return: Always 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('65');
		}
		_putchar('\n');
	}

}
