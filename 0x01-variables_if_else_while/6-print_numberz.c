#include<stdio.h>

/**
 * main - Enrty point
 *
 * Description: print numeric digits from 0 to 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
