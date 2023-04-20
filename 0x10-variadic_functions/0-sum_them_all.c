#include "variadic_functions.h"

/**
 *sum_them_all - function that sums all given paramters
 *@n: unsigned int rep the count
 *@...: integers to be used
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	int tsum = 0, inc = n;
	va_list ap;

	if (!n)
		return (0);

	va_start(ap, n);
	while (inc--)
		tsum += va_arg(ap, int);

	va_end(ap);
	return (tsum);
}
