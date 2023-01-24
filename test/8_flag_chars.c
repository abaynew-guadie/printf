#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Print len
 * Command to run test:
 * gcc./tests/8_flag_chars.c _printf.c handle_print.c get_flags.c get_width.c
 * prf.c utilts.c
 *gcc ./tests/8_flag_chars.c _printf.c handle_print.c get_flags.c
 *prf.c prf1.c  prf2.c utils.c
 */
int main(void)
{
	int len1, len2;
	int addrs[1];

	len1 = printf("Flag: [%+ d]", 1230);
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%+ d]", 1230);
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%+ d]", -231);
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%+ d]", -231);
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [% d]", 239);
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [% d]", 239);
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [% i]", 490);
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [% i]", 490);
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [% i]", -43);
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [% i]", -43);
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%+ p]", addrs);
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%+ p]", addrs);
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [% p]", addrs);
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [% p]", addrs);
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%#o]", 231);
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%#o]", 231);
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%#x]", 231);
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%#x]", 231);
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);

	len1 = printf("Flag: [%#X]", 231);
	printf(" => %d\n", len1);
	len2 = _printf("Flag: [%#X]", 231);
	printf(" => %d\n", len2);
	printf("Correct: %d\n\n", len1 == len2);
}
