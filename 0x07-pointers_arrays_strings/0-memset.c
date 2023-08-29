#include "main.h"
/**
 * memset.c - fills memory with a constant byte
 *
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of byte
 *
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* Loop over the first n bytes of the memory area pointed to by s. */
	for (unsigned int i = 0; i < n; i++)
	{
		/* Set the i-th byte to the constant byte b. */
		s[i] = b;
	}
	return (s);
}
