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

	num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
