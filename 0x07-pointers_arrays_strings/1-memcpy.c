#include "main.h"
/**
 * memcpy  - copies memory area
 *
 * @src: source of data to be copied
 * @dest: destination
 * @n: number of bytes
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	  /* Loop over the first n bytes of the memory area pointed to by src. */
	for (unsigned int i = 0; i < n; i++)
	{
		/* Copy the byte at src[i] to the byte at dest[i]. */
		dest[i] = src[i];
	}
	return (dest);
}
