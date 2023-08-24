#include "main.h"

/**
 * string_toupper - changes them to upper
 *
 * @str: string
 * Return: Always 0
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
