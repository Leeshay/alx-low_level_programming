#include "main.h"
/**
 * jack_bauer - print the minutes
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((h / 10) + '0');
			-putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}

