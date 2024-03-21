#include <stdio.h>

/**
 * main - The program entry
 *
 * Return: the exit code
 */
int main(void)
{
	char c, C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
