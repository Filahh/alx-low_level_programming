#include "main.h"
/**
 * swap_int - swapping values of teo integers
 *
 * @a: first value
 * @b: second value
 *
 * Retuen: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;

}
