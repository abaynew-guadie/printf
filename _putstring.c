#include "main.h"

/**
* _putstring - function prints input string
*
* @s: given pointer variable
* Return: the string
*/
int _putstring(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		i++;
	}
	return (i);
}
