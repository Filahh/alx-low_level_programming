#include "main.h"
#include <string.h>
/**
 * _strcat - concantenates two strings
 *
 * @dest: first string
 * @src: second string
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
