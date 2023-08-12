#include <stdio.h>

/**
 * main - this is the main function
 * Description: prints all possible combination of single digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
		if (num == 10)
			continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
