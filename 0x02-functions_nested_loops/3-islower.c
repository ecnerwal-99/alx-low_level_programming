#include <stdio.h>
#include "main.h"
/**
 * _islower - Check the code
 * @c: is an input parameter
 * Description: checks for a lower case character
 * Return: 0
 */
int _islower(int c)
{
	char i;
	int j = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			j = 1;
		}
	}
	return (j);

}
