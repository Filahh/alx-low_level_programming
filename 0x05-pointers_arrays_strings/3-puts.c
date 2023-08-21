#include "main.h"
/**
 * _puts - print a string to stdout
 *
 * @str: string to be lrinted out
 *
 * Return : Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
