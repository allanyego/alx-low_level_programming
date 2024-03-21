#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The program entry
 *
 * Return: the exit code
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lst = abs(n) % 10;
	lst = n < 0 ? -(lst) : lst;
	printf("Last digit of %d is %d and is ", n, lst);
	if (lst == 0)
		printf("0\n");
	else if (lst > 5)
		printf("greater than 5\n");
	else if (lst != 0 && lst < 6)
		printf("less than 6 and not 0\n");
	return (0);
}
