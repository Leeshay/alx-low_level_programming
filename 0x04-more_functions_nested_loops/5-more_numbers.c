#include "main.h"
/**
 * more_numbers - print numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		for ( j = '0'; j <= '14'; j++)
		       _putchar(j);
		/*
		 * {
		 *if (i >= 10)
		 {
		 _putchar((i / 10) + '0');
		 }
		 _putchar((i % 10) + '0');
		 }
		 */
	_putchar('\n');
	}
}	