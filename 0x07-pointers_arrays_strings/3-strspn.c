#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the string to search
 * @accept: The set of characters to accept
 * Return: Returns the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
