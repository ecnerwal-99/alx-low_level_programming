#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - check the code
 * @n: is parameter of type int
 * Descriptiom: prints the last digit of a number
 * Return:0
 */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
		num = -1 * (n % 10);
	else
		num = (n % 10);
	_putchar(num + '0');
	return (num);
}
