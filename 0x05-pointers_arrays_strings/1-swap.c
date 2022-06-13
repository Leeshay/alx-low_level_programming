#include "main.h"
/**
 * swap_int - swap a and b
 * @a: integer pointer
 * @b: integer pointer
 */
void swap_int(int *a, int *b)
{
	int *c = NULL;

	*c = *a;
	*a = *b;
	*b = *c;
}
