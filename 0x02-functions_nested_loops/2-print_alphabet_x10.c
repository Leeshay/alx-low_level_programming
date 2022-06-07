#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print the alphabet in lowercase ten times
 *
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			_putchar('\n');
			alpha++;
		}
	}
}

