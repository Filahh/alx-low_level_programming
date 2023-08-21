#include "main.h"
/**
 * _strlen - shows length of a string
 * @s: srring to be checked
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return('length');
}
