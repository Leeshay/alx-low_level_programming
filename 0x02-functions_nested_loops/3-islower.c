#include "main.h"
#include <stdio.h>
/**
 * _islower - Return 1 if c is lowercase else return 0
 *@c: character input
 * Return: 0 for upper , 1 for lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
