#include <stdio.h>

/**
  *main -entry point
  *Return: always 0 (success)
  */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		printf("%d", n);
		++n;
	}

	printf("\n");
	return (0);
}
