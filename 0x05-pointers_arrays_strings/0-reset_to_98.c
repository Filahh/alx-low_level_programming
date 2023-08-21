#include "main.h"
/**
 * reset_to_98 - reset the value to 98
 *
 * @n: value to be changed
 *
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int a;

	a = 10;

	n = &n;

	_putchar('the value of a: %d', a);

	_putchar('\n');

	_putchar('the address of a: %p', n);

	_putchar('\n');

	*n = 98;

	_putchar('value of a: %d', n);

	_putchar('\n');

	return (0);
}
