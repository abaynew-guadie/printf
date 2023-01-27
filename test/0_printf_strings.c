#include "../main.h"
#include <stdio.h>
/**
 * main - Prints length
 *  Command to run test:
 * gcc ./test/0_printf_strings.c *.c
 */
int main(void)
{
int len1, len2;

len1 = printf("Hello", "");
printf(" => %d\n", len1);
len2 = _printf("Hello", "");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %s ... %s", "...");
printf(" => %d\n", len1);
len2 = _printf("Hello %s ... %s", "...");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %c %c %c %c %c", 'H', 'l', 'b', 't', 'n');
printf(" => %d\n", len1);
len2 = _printf("Hello %c %c %c %c %c", 'H', 'l', 'b', 't', 'n');
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %%");
printf(" => %d\n", len1);
len2 = _printf("Hello %%");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);
}
