#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
* struct token - token function
* @token: char
* @f: funtion to pointer
*/
typedef struct token
{
	char *token;

	void (*f)(char *, var_list);
} token_t;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
