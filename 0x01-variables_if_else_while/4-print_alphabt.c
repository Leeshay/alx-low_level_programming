#include <stdio.h>
/**
 * main - main function
 * Description: print alphabet exept e and q
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha)
				;
		alpha++;
	}
	return (0);
}
