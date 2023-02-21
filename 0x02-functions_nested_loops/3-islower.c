#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/* more headers go there */

/**
 * _islower - Entry point
 *
 * Return: 1 if c is lower case or 0 ic c is uppercase (Success)
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
