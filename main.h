#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
/* SIZES */
#define S_LONG 2
#define S_SHORT 1
/**
 * struct format - match the conversion specifiers for printf
 *  @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 *  @f: type pointer to function for the conversion specifier
 */
typedef struct format
{
char *id;
int (*f)();
} convert_match;

int _printf(const char *format, ...);
int printf_pointer(va_list val);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int printf_exclusive_string(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);
int printf_unsigned(va_list args);
int printf_bin(va_list val);
int printf_srev(va_list args);
int printf_rot13(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int _strlen(char *s);

int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list val);
int printf_string(va_list val);
int _putchar(char c);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);

int get_flags(const char *format, int *i), int write_unsgnd(int is_negative,    int ind, char buffer[], int flags, int width, int precision, int size);

/****************** UTILS ******************/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
#endif
