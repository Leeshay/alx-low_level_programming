#include "main.h"
/**
 * swap_int - swap a and b
 * @a: integer pointer
 * @b: integer pointer
 */
void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}
