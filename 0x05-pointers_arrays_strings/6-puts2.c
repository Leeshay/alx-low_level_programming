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
		i++;
	for (j = 0; j < i; i += 2)
		_putchar(str[j]);
	_putchar('\n');
}