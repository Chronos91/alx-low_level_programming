#include "main.h"

/**
  * _islower - function to print lower casr
  *
  * @c: parameter to be printed
  * Return: 1 if True
  * otherwise 0
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);

	return (0);
}
