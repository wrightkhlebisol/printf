#ifndef _PRINT_F_
#define _PRINT_F_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _putchar(char c);
void print_null(void);
int printstring(char *str);
int print_num(int num);
int print_bin(int num);
int print_octal(unsigned int num);
int print_hexa_x(unsigned int num);
int print_hexa_X(unsigned int num);

#endif
