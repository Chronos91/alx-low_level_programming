#include <stdio.h>

/**
  *main -entry point
  *Return: always 0 (success)
  */

int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
