#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, rows;

	rows = size;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= rows; i++)
		{
			for (j = 1; j <= rows; j++)
			{
				if (j <= rows - i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
