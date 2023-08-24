#include "main.h"
/**
 * _strncat - concatenates two strings using strn
 *
 * @src: first string
 * @dest: destination
 * @n: number of character
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
