#include "../main.h"

#include <stdio.h>
/**
 *main - Prints
 *  * Command to run test:
 * gcc ./_printf.c handle_print.c prf.c prf1.c prf2.c utilts.c
 * tests/0_unsigned_binary.c get_flags.c
 *
 * Return 0.
 */
int main(void)
{
unsigned int hola = 270;
_printf("%b\n", 98);
printf("%b\n", 150);
_printf("%b\n", hola);
return (0);
}
