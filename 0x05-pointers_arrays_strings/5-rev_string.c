#include "main.h"
#include <stdio.h>
/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int count = 0;
	int back = 0;
	char tempo;

	while (s[count] != '\0')
		count++;

	while (back < count--)
	{
		tempo = s[back];
		s[back++] = s[count];
		s[count] = tempo;
	}
}
