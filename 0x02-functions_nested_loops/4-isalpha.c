#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Return 1 if c is in the alphabet  else return 0
 *@c: character input
 * Return: 0 for non-alphabetic character , 1 for alphabetic character
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
