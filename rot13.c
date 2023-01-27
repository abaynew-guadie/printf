#include "main.h"

int rot13(char *str)
{
	int index = 0, a, flag = 0, ct = 0;

	char l[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (!str)
	{
		str = "(null)";
	}
	while (str[index])
	{
		for (a = 0; a < 52; a++)
		{
			if (str[index] == l[a])
			{
				_putchar(rot[a]);
				ct++;
				flag = 1;
				break;
			}
		}
		if (!flag)
			_putchar(str[index]);
		flag = 0;
		index++;
	}
	return (ct);
}
