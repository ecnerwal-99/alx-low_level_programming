#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x raised to y
 * @x: is the base
 * @y: is the exponent
 * Return: the power of x raised to y
 */
int _pow_recursion(int x, int y)
{
    if (y == 0)
    {
        return (1);
    }
    
    if(y < 0)
    {
        return (-1);
    }
    return (x * _pow_recursion(x , y-1));	
}