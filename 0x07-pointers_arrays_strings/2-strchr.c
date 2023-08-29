#include "main.h"

/**
 * strchr- locates  acharacter in a string
 * @s: string to search for
 * @c: character
 *
 * Return: pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
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
