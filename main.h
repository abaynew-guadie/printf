#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_number(int n);
int base10_bin(int n);
int _putstring(char *s);
int rev_string(char *s);
int rot13(char *str);
int print_digit(int n);
int _istrlen(char *s);

#endif
