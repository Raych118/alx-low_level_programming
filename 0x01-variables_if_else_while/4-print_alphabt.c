#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int character;

	for (character = 'a' ; character <= 'z' ; character++)
	{
		if (character != 'q' && character != 'e')
		{
			putchar(character);
		}
	}
	putchar('\n');
	return (0);
}
