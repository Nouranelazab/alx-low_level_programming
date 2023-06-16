#include<stdio.h>

/**
 * main - Enrty point
 *
 * Description: print alphabetic letters from a to z.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
