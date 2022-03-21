#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int count = _strlen(*s);

	while (count <= 0)
	{
		_putchar(s[count--]);
	}
	_putchar('\n');
}
