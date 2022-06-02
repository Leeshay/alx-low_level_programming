#include <stdio.h>
/**
 * main - this is the main function
 * Return: Nothing
 */
int main(void)
{
	char ch;
	int _int;
	long lg;
	long long longlg;
	float fl;
	printf("Size of a char: %ld byte(s)\n", sizeof(ch));
	printf("Size of an int: %ld byte(s)\n", sizeof(_int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lg));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(longlg));
	printf("Size of a float: %ld byte(s)\n", sizeof(fl));
	return (0);
}
