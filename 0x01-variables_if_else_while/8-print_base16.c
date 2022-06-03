#include <stdio.h>
/**
 * main -main function
 * Description: hexidecimals
 * Return: 0
 */
int main(void)
{
	int i;
	char h = 'a';

	for (i = 0; i < 16 ; i++)
	{
		if (i < 10)
			putchar(i + '0');
		else
		{
			putchar(h);
			h++;
		}
	}
	putchar('\n');
	return (0);
}

