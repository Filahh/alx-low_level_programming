#include <stdio.h>

/**
 * main - this is the main function
 * Description: prints single digits of base 10 from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;
	char alphabet;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
