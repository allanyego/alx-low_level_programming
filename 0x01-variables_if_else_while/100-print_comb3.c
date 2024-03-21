#include <stdio.h>

/**
 * main - The program entry
 *
 * Return: the exit code

 * INCOMPLETE!
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i == 8 || j == 9)
				putchar('\n');
			else
				putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
