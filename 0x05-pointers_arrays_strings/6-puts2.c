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

	while (str[len] != '\n')
	{
		while (len++ % 2 == 0)
			_putchar(str[len]);
	}
}
