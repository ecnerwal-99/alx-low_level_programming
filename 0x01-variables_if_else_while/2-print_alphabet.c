#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: putchar functionality
 *
 * Return: 0
 */
int main(void)
{
	char lowCase;

	for (lowCase = 'a' ; lowCase <= 'z' ; lowCase++)
		putchar(lowCase);
	putchar('\n');
	return (0);
}
