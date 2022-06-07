#include "main.h"
/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;
		       if ((x / 10) == 0)
		       {
			       if (j != 0)
			       {
				       _putchar(' ');
			       }
			       _putchar(x + '0');
			       if (j == 9)
				       continue;
			       _putchar(',');
			       _putchar(' ');
		       }
		       else
		       {
			      _putchar((x / 10) + '0');
			      _putchar((x % 10) + '0');
			      if ( j == 9)
				      continue;
			      _putchar(',');
			      _putchar(' ');
		       }
		}
		_putchar('\n');
	}
}

