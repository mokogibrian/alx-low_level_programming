#include <stdio.h>

/**
 * main - Prints alphabet in lower case
 *
 * Return - always zero (Success)
 */

int main(void)
{
	char ch = 'a';
	while (ch <= 'z');
	{
		putchar (ch); ++ch;
	}
		putchar ('\n');
	return (0);
}

