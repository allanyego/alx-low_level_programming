#include <stdio.h>

/**
 * main - The program entry
 *
 * Return: the exit code
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
