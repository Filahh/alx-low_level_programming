#include <stdio.h>

/**
 * main - this is the main function
 * Description: A program that prints the alphabet in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
