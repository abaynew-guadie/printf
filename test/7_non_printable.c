#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 *  *main - Print len
 *  * Command to run test:
*gcc ./test/7_non_printable.c _printf.c utilts.c get_flags.c
*/
int main(void)
{
int len1, len2;

len1 = printf("Non printable:[%S]\n", "Holberton\nSchool");
printf(" => %d\n", len1);
len2 = _printf("Non printable:[%S]\n", "Holberton\nSchool");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Non printable:[%S]", "Hello");
printf(" => %d\n", len1);
len2 = _printf("Non printable:[%S]", "Hello");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Non printable:[%S]", NULL);
printf(" => %d\n", len1);
len2 = _printf("Non printable:[%S]", NULL);
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);
len1 = printf("Non printable:[%S]", "This is non \n \e print \t able. message.");
printf(" => %d\n", len1);
len2 = _printf("Non printable:[%S]", "This is non \n \e print \t able. message.");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Non printable:[%S]", "Not handle \\0 case , Why? \0 .");
printf(" => %d\n", len1);
len2 = _printf("Non printable:[%S]", "Not handle \\0 case , Why? \0 .");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);
}
