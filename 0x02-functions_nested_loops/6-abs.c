#include "main.h"
#include <stdio.h>

/**
 * _abs- prints absolute value
 *
 * @n: value to convert
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
