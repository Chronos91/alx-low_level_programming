#include <stdio.h>

/**
  *main -entry point
  *Return: always 0 (success)
  */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 10; x++)
	{
		while (x != y !=z)
		{
			for (y = 0; y <= 10; y++)
			{
				for (z = 0; z <= 10; z++)
				{
					if ((x < y < z) && (x != y != z))
					{
						putchar(x + '0');
              					putchar(y + '0');
	         				putchar(z + '0');
						if (x, y, z != 7, 8, 9)
						{
							putchar(',');
					        	putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

