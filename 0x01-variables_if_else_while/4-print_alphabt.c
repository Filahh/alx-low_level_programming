#include <stdio.h>
/**
 * main - this is the main function
 * Description: prints the alphabet without q and e in lowercase via putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
