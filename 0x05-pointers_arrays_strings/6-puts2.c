#include "main.h"
/**
 * puts2 -  print every chracter of string beginning with the first
 * @str: character pointer
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
