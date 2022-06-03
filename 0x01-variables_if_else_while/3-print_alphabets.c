#include<stdio.h>
/**
 * main - main function
 * Description: uppercase and lowercase alphabets
 * Return: 0
 */
int main(void)
{
	char alpha1 = 'a';
	char alpha2 = 'A';

	while (alpha1 <= 'z')
	{
		putchar(alpha1);
		alpha1++;
	}

	while (alpha2 <= 'Z')
	{
		putchar(alpha2);
		alpha2++;
	}
	putchar('\n');
	return (0);
}

