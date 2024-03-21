#include <stdio.h>

/**
 * main - The program entry
 *
 * Return: the exit code
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			for (k = 0; k < 10; k++)
			{
				for (l = k + 1; l < 10; l++)
				{
					if (i == 9 && j == 8)
						putchar('\n');
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}				
		}
	}
	return (0);
}
