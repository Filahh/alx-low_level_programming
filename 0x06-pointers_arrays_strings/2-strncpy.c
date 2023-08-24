#include "main.h"
#include <string.h>
/**
 * strcpy - copies a string
 *
 * @dest: first argument
 * @src: second argument
 * @n: number of characters
 *
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
