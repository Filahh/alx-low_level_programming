#include <stdio.h>

/**
 * main - this is the main function
 * Description: prints the alphabet in lowercase and uppercase using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		putchar(alphabet);

	putchar('\n');
	return (0);
}
