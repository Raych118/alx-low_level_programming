#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *p = "_putchar";

	while (*p)
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
	return (0);
}
