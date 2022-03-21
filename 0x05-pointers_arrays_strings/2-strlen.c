#include "main.h"
#include <stdio.h>
/**
 * _strlen -  a function that returns the length of a string.
 * @s: An input string
 * Return: string length
 */
int _strlen(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
