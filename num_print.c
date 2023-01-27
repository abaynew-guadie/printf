#include "main.h"
#include <unistd.h>

int print_number(int n)
{
	int dig = n;
	int count = 0;
	int places = 1;

	while (dig / 10)
	{
		dig /= 10;
		places *= 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
	}
	while (places > 0)
	{
		dig = n / places;
		places /= 10;
		if (n < 0)
			_putchar(dig % 10 * (-1) + '0');
		else
			_putchar(dig % 10 + '0');
		count++;
	}
	return (count);
}
