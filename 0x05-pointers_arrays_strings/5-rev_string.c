#include "main.h"
/**
 * rev_string - reverse string
 * @s: character
 */
void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
