#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times.
 *
 * Void.
 */

void print_alphabet_x10(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		char b;

		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}

		_putchar('\n');
	}
}
