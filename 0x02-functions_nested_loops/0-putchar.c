#include "main.h"
/**
 * main - main program
 * Description: print _putchar
 * Return: 0
 */
int main(void)
{
	char word[7] = '_putchar';
	int i = 0;

	while (i < 7)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
