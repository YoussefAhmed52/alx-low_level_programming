#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


#include <stdrag.h>
#include <stdio.h>

/**
 * struct token - struct
 *
 * @token: token format
 *
 * @f: associated function
 */
typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
oid print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
