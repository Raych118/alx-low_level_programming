#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/* more headers go there */

/**
 * print_sign - Entry point
 *
 * Return: 1 if n is positive or -1 if n is negative or 0 if n is 0 (Success)
 *
 * @n: is a variable going to be passed by whichever class calls the function
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
