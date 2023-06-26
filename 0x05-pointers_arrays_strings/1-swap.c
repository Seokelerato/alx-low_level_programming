#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integar to swap
 * @b: integar to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
