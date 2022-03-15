#include <stdio.h>
#include "main.h"
/**
 * print_sign - check code
 * @n: input parameter
 * Description: prints the sigh of a number
 * Return: 0
 */
int print_sign(int n)
{
	int i = 0;

	if (n > 0)
	{
		i = 1;
		_putchar = ('+');
	}
	else if (n == 0)
	{
		i == 0;
		_putchar = ('0');
	}
	else
	{
		i == -1;
		_putchar = ('-');
	}
	return (i);
}
