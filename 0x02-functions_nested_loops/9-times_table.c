#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/* more headers go there */

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int tr, br, prod, print;
	int after;

	for (tr = 0 ; tr < 10 ; tr++)
	{
		for (br = 0 ; br < 10 ; br++)
		{
			prod = tr * br;

			if (prod >= 10)
			{
				print = prod / 10;
				_putchar(print + '0');
				after = prod % 10;
				_putchar(after + '0');
			}
			else
			{
				if (prod != 0)
					_putchar(' ');

				_putchar(prod + '0');
			}

			if (br != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
