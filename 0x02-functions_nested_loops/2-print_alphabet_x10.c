#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 * Description: prints alphabet 10 times followed by new line
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i  = 'a'; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
