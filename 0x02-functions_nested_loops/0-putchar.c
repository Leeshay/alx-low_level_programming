#include "main.h"
/**
 * main - main program
 * Description: print _putchar
 * Return: 0
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
