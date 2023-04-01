#include "main.h"

/**
  * _abs - returns the absolute value of an int
  *
  * @x: value
  * @y: return value negative
  *
  * Return: Always 0
  */

int _abs(int x)
{
	if (x < 0)
	{
		int y;

		y = -1 * x;
		return (y);
	}
	else if (x > 0)
	{
		return (x);
	}
	else if (x == 0)
	{
		return (0);
	}

	return (0);
}
