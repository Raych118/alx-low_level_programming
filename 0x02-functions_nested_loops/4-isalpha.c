#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/* more headers go there */

/**
 * _isalpha - Entry point
 *
 * Return: 1 if c is a letter or 0 if c is not a letter (Success)
 *
 * @c: is a variable going to be passed by whichever class calls the function
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
