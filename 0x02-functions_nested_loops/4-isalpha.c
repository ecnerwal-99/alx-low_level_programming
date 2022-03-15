#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check the code
 * @c: is an input parameter
 * Description: it schecls for alphabetic character
 * Return: 0
 */
int _isalpha(int c)
{
	char i;
	char j;
	int z = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (c == i || c == j)
				z = 1;
		}
	}
	return (z);
}
