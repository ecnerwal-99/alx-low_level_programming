#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * main -  the entry to the program
 *
 * Description : program prints out string of characters using putchar function
 *
 * Return: 0
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
}
