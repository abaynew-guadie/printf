#include "main.h"

int print_digit(int n)
{
	int div;
	int count = 0;

	for (div = 1; div <= n; div *= 10)
		;
	while (n > 0)
	{
		div /= 10;
		_putchar(n / div + '0');
		n %= div;
		count++;
	}
	return (count);
}
