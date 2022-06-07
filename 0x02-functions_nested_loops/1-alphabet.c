#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print the alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

