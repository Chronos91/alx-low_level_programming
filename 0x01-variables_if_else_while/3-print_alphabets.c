#include <stdio.h>

/**
  *main -entry point
  *Return: always 0 (success)
  */

int main(void)
{
	int l;
	int u;

	l = 97;
	u = 65;

	while (l <= 122)
	{
		putchar(l);
		++l;
	}
	while (u <= 90)
	{
		putchar(u);
		++u;
	}

	putchar('\n');
	return (0);
}

