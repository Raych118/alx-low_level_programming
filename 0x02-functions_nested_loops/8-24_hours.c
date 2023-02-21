#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/* more headers go there */

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0 ; hours < 24 ; hours++)
	{
		for (minutes = 0 ; minutes < 60 ; minutes++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
		}
	}
}
