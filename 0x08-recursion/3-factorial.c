#include <stdio.h>
#include "main.h"
/**
 * factorial - a function that returns the factorial of an input integer
 * @n: an input interger
 * Return: factorial of n
 * 
 */
int factorial(int n)
{
    if(n == 0)
    {
        return (0);
    }
    return (n * factorial(n - 1));
}