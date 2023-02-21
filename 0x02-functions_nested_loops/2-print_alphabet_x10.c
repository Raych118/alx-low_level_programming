#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void as it is a function (Success)
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int num;

	for (num = 1 ; num <= 10 ; num++)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
