#include <stdio.h>

/**
  *main -entry point
  *Return: always 0 (success)
  */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x == 57)
		{
			putchar(x);
			break;
		}
		putchar(x);
		putchar(',');
		putchar(' ');
	}

	return (0);
}
