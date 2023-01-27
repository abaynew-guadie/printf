#include "main.h"

/**
* no_struct - a function that is called when passing args to the switch case
*
* @c: the character passed that was after %
* @count: incremetation of count
* @argu: the va_list argument variable
* Return: count
*/
int no_struct(char c, int count, va_list argu)
{
	int j;
	char *s;

	switch (c)
	{
		case 'c':
			j = va_arg(argu, int);
			count += _putchar(j);
			break;
		case 's':
			s = va_arg(argu, char *);
			if (!s)
			{
				_putchar('(');
				_putchar('n');
				_putchar('u');
				_putchar('l');
				_putchar('l');
				_putchar(')');
				count += 6;
			}
			else
				count += _putstring(s);
			break;
		case 'i':
		case 'd':
			j = va_arg(argu, int);
			if (!j)
			{
				count++;
				_putchar('0');
			}
			else
				count += print_number(j);
			break;
		case '%':
			count += _putchar('%');
			break;
		case 'b':
			j = va_arg(argu, int);
			count += base10_bin(j);
			break;
		case 'r':
			s = va_arg(argu, char *);
			count += rev_string(s);
			break;
		case 'R':
			s = va_arg(argu, char *);
			count += rot13(s);
			break;
		default:
			count += 2;
			_putchar('%');
			_putchar(c);
	}
	return (count);
}


/**
 * _printf - funtion is an implementation of the native printf function
 *
 * @format: input directives
 * Return: returns nothing.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list argu;

	va_start(argu, format);

	if (!format)
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			count++;
			_putchar(format[i]);
		}
		else if (format[i + 1])
		{
			i++;
			count = no_struct(format[i], count, argu);
		}
		else
			return (-1);
	}
	va_end(argu);
	return (count);
}
