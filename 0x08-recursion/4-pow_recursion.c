#include <stdio.h>
#include "main.h"
/**
 * int _pow_recursion - a function that returns the value of x raised to y
 * @x: is the value that is being worked on
 * @y: is the power
 * Return: the power of x raised to y
 */
int _pow_recursion(int x, int y)
{
    if(y < 0)
    {
        return (-1);
    }
    return (x * _pow_recursion(x , y-1));
}