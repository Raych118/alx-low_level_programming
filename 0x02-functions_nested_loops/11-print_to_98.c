#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers go there */

/**
 * print_to_98 - Entry point
 *
 * Return: Always return 0 (Success)
 *
 * @n: a variable to be passed by the calling function
 */
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n ; x <= 98 ; x++)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else
			{
				printf("%d", x);
			}
		}
	}
	else
	{
		for (x = n ; x >= 98 ; x--)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else
			{
				printf("%d", x);
			}
		}
	}
	printf("\n");
}
