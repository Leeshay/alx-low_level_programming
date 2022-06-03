#include <stdio.h>
/**
 * main - main function
 * Description: print alphabet exept e and q
 * Retrun: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q'){
			alpha++;
		}
		putchar(alpha);
		alpha++;
	}
	return (0);
}
