#include <limits.h>
#include <stdio.h>
#include "../main.h"
/**
 * main - Prints len
 * Command to run test:
 * gcc ./test/10_width.c _printf.c get_flags.c
 * get_width.c utilts.c
 */
int main(void)
{
	int len1, len2;
	int addrs[1];

	len1 = printf("Flag: [%+5c]", 'H');
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%+5c]", 'H');
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%-5c]", 'H');
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%-5c]", 'H');
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%+05c]", 'H');
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%+05c]", 'H');
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%-05c]", 'H');
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%-05c]", 'H');
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%+0c]", 'H');
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%+0c]", 'H');
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%-0c]", 'H');
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%-0c]", 'H');
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%-0c]", '\0');
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%-0c]", '\0');
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%-8c]", '\0');
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%-8c]", '\0');
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%8c]", '\0');
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%8c]", '\0');
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%10s]", NULL);
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%10s]", NULL);
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%-10s]", NULL);
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%-10s]", NULL);
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%-10s]", "Hey");
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%-10s]", "Hey");
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%10s]", "Hey");
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%10s]", "Hey");
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%2s]", "Hey");
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%2s]", "Hey");
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%2s]", "\0");
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%2s]", "\0");
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%s]", "\0");
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%s]", "\0");
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%s]", "\0Hello");
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%s]", "\0Hello");
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [% -10%]", "\0Hello");
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [% -10%]", "\0Hello");
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [% 10%]", "World!");
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [% 10%]", "World!");
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

}
