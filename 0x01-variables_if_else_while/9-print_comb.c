#include<stdio.h>

/**
 * main - Enrty point
 *
 * Description: print numeric digits from 0 to 9
 *              separated by ,, followed by a space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		if (digit != 9)
		{
			putchar(digit + '0');
			putchar(',');
			putchar(' ');
			digit++;
		}
		else
			putchar(digit + '0');
	}
	return (0);
}
