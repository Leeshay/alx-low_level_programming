#include "main.h"
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	long int n;
	int prime;

	n = 612852475143;
	for (prime = 2; prime < n; prime++)
	{
		if (n % prime == 0)
		{
			n /= prime;
			prime--;
		}
	}
	printf("%ld\n", prime);
	return (0);
}


