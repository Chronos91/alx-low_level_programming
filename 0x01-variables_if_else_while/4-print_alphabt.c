#include <stdio.h>

/**
  *main -entry point
  *Return: always 0 (success)
  */

int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a == 113 || a == 101)
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}

