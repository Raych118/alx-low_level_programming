#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * print_last_digit - Entry point
 *
 * Return: Always last digit (Success)
 *
 * @n: variable to be passed by calling function
 */
int print_last_digit(int n)
{
	int dig;

	dig = n % 10;

	if (dig < 0)
		dig *= -1;

	_putchar(dig + '0');
	return (dig);
}
