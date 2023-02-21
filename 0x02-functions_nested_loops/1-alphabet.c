#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * print_alphabet - Entry point
 *
 * Return: void asi it is a function (Success)
 */
void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
