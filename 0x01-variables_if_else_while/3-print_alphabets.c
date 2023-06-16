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
	char ALPHA = 'A';

	/*to print alpha from a to z*/
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	/*to print ALPHA from A to Z*/
	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');
	return (0);
}
