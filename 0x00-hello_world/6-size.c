#include <stdio.h>

/**
 * main - main program
 */
int main(void)
{
  char c;
  int i;
  long l;
  long long ll;
  float f;

  printf("Size of a char: %d byte(s)\n", (int)sizeof(c));
  printf("Size of an int: %d byte(s)\n", (int)sizeof(i));
  printf("Size of a long int: %d byte(s)\n", (int)sizeof(l));
  printf("Size of a long long int: %d byte(s)\n", (int)sizeof(ll));
  printf("Size of a float: %d byte(s)\n", (int)sizeof(f));
  return (0);
}
