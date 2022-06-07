#include "main.h"
/**
 * _abs - return absolute value of integer
 * @n: integer
 * Return: 1 if integer > 0, convert integer to positve if negative, else 0
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
