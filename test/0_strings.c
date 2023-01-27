#include "../main.h"
#include <stdio.h>
/**
*main - Print len
*Command to run test:
*gcc ./test/0_strings.c  get_flags.c get_width.c utilts.c get_flags.c *.c
*/
int main( void)
{
int len1, len2;

len1 = printf("Hello %s", "");
printf(" => %d\n", len1);
len2 = _printf("Hello %s", "");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %s ... ", "...");
printf(" => %d\n", len1);
len2 = _printf("Hello %s ... ", "...");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %s ... ", NULL);
printf(" => %d\n", len1);
len2 = _printf("Hello %s ... ", NULL);
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %s ... ", NULL);
printf(" => %d\n", len1);
len2 = _printf("Hello %s ... ", NULL);
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %s ... ", "...");
printf(" => %d\n", len1);
len2 = _printf("Hello %s ... ", "...");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %s ... ", "Holberton");
printf(" => %d\n", len1);
len2 = _printf("Hello %s ... ", "Holberton");
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

len1 = printf("Unknown:[%s]", "\0");
printf(" => %d\n", len1);
len2 = _printf("Unknown:[%s]", "\0");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Unknown:[%s] %s", "");
printf(" => %d\n", len1);
len2 = _printf("Unknown:[%s] %s", "");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf(NULL, "");
printf(" => %d\n", len1);
len2 = _printf(NULL, "");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("*", NULL);
printf(" => %d\n", len1);
len2 = _printf("*", NULL);
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %c", '\0', 'l', 'b', 't', 'n');
printf(" => %d\n", len1);
len2 = _printf("Hello %c", '\0', 'l', 'b', 't', 'n');
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %%%%%%%% %%%");
printf(" => %d\n", len1);
len2 = _printf("Hello %%%%%%%% %%%");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %");
printf(" => %d\n", len1);
len2 = _printf("Hello %");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello % 123");
printf(" => %d\n", len1);
len2 = _printf("Hello % 123");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %% 432");
printf(" => %d\n", len1);
len2 = _printf("Hello %% 432");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %%% 340");
printf(" => %d\n", len1);
len2 = _printf("Hello %%% 340");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello % w");
printf(" => %d\n", len1);
len2 = _printf("Hello % w");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %    w q");
printf(" => %d\n", len1);
len2 = _printf("Hello %    w q");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %w 100");
printf(" => %d\n", len1);
len2 = _printf("Hello %w 100");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello % 32w 100");
printf(" => %d\n", len1);
len2 = _printf("Hello % 32w 100");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %  h 100");
printf(" => %d\n", len1);
len2 = _printf("Hello %  h 100");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

len1 = printf("Hello %  lwl 100");
printf(" => %d\n", len1);
len2 = _printf("Hello %  lwl 100");
printf(" => %d\n", len2);
printf("Correct: %d\n\n", len1 == len2);

int len;
printf("-------CHAR CASE percent y n ------\n");
len = _printf("h_ %% %% jnd%    jjjh hhh\n");

len2 = printf("ho %% %% jnd%    jjjh hhh\n");
printf("Length2:[_printf:%d, printf:%d]\n", len, len2);
printf("-------CHAR CASE percent + null ------\n");
_printf("h_ %% %% jnd%\0 _printf\n");
_printf("\n");
printf("ho %% %% jnd%\0 oprintf\n");

_printf("\n");
printf("-------CHAR CASES one percent------\n");
len = _printf("h_ %% %% jnd%%%%%    h hhh\n");
len2 = printf("ho %% %% jnd%%%%%    h hhh\n");

printf("Length2:[_printf:%d, printf:%d]\n", len, len2);
printf("-------MAIN STARTED------\n");
len = _printf("Let’s try to printf a simple sentence.\n");
len2 = printf("Let’s try to printf a simple sentence.\n");

printf("-------CHAR CASE percent y n ------\n");
len = _printf("h_ %% %% jnd%    jjjh hhh\n");

 len2 = printf("ho %% %% jnd%    jjjh hhh\n");
 printf("Length2:[_printf:%d, printf:%d]\n", len, len2);
printf("-------CHAR CASE percent + null ------\n");
_printf("h_ %% %% jnd%\0 _printf\n");
_printf("\n");

printf("ho %% %% jnd%\0 oprintf\n");
_printf("\n");
printf("-------CHAR CASES one percent------\n");
len = _printf("h_ %% %% jnd%%%%%    h hhh\n");
len2 = printf("ho %% %% jnd%%%%%    h hhh\n");

printf("Length2:[_printf:%d, printf:%d]\n", len, len2);
printf("-------MAIN STARTED------\n");
len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
return (0);

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");

printf("%%");
_printf("Hello %%\n");
printf("%.4%");	 /* { dg-warning "format" "bogus %%" } */
_printf("%%.3%%");

 _printf("%-%\n");	 /* { dg-warning "format" "bogus %%" } */
_printf("%-%\n"); /* { dg-warning "format" "bogus %%" } */
_printf("%5%\n"); /* { dg-warning "format" "bogus %%" } */
_printf("%h%\n"); /* { dg-warning "format" "bogus %%" } */
}
