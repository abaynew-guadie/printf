#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include "../main.h"
/**
* main - Prints len
* Command to run test:
*gcc./test/8_print_reverse.c _printf.c handle_print.c write_handlers.c
* get_width.c prf.c  utilts.c get_flags.c
*/
int main(void)
{
int len;
int len2;
unsigned int ui;
void *addr;

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");

_printf("Unknown:[%r]\n");
}
