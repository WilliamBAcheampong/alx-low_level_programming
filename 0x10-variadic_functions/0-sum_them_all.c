#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Return sum of all its parameter(s).
 * @...: A variable number of parameter(s) to calculate the sum of.
 *
 * @n: The number of parameter(s) passed to the function.
 * @...: A variable number of parameter(s) to calculate the sum of.
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
