#include "main.h"

int print_last_digit(int i)
{
	int n;
	
	n = i % 10;
	if ( i < 0)
		n = -n;
	return (n);
}
