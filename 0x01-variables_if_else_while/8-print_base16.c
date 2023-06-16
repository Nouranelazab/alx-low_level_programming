#include<stdio.h>

/**
 * main - Enrty point
 *
 * Description: print prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit = 0;
	char ch = 'a';

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	printf("\n");
	return (0);
}
