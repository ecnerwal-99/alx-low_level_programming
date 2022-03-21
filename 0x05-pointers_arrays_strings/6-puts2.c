#include "main.h"
#include <stdio.h>
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\n')
		len++;

	for (len -= 1; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
