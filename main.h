#ifndef main_h
#define main_h

/** Libariers used in the code **/
#include <stdlib.h>
#include <stdarg.h>

/** prototype of the function **/
int _printf(const char *format, ...);
int _putchar(char c);

/** Macros **/
#define BUFFER_SIZE 1024

/** built_in functions **/
int _strlen(char *str);
char *_strdup(char *str);
int printstr(char *str, char *(*ptf)(char *));
int precentageCases(char c, va_list arg);
int print_int(int num, char *buffer);
int print_binary(long int num, char *buffer);
int print_octal(unsigned int num, char *buffer);
int print_uint(unsigned int num, char *buffer);
int print_hex(unsigned int num, char *buffer, char flag);
char *_toupper(char *str);
char *rot13(char *str);
char *revstr(char *str);
char *int2str(long int num, char *strout, int base);
int numberscases(char c, long int num, char *buffer);

#endif

