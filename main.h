#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printNumber(long num, int count);
int identifier_c(va_list arg);
int identifier_d(va_list arg);
int identifier_s(va_list arg);
int (*selector(char str))(va_list arg);
void printBinary(int num);

#endif
