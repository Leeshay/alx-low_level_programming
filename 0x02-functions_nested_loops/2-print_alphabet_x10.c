#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print the alphabet in lowercase ten times
 *
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}

