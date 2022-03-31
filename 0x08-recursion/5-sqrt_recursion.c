#include <stdio.h>
#include "main.h"
/**
 * @brief
 *
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_basecase(n,1));
}
int _sqrt_basecase(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	else
	{
		g++;
		return (_sqrt_basecase(n,g));
	}
	
}