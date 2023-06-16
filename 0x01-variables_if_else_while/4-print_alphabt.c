#include<stdio.h>

/**
 * main - Enrty point
 *
 * Description: print alphabetic letters from a to z except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q' || alpha == 'e')
			alpha++;
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
