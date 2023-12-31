#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum of its parameters
 * @n: number of argument passed into the function
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(list, const unsigned int);
		}
	}
	va_end(list);
	return (sum);
}
