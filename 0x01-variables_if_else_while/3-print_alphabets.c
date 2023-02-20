#include <stdio.h>

/**
 * main - entry point
 * This script prints the alphabet in lowercase
 * then in uppercase
 *
 * return - always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
