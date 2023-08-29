#include "main.h"

/**
 * _strchr- locates  acharacter in a string
 * @s: string to search for
 * @c: character
 *
 * Return: pointer to the character c in the string s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
