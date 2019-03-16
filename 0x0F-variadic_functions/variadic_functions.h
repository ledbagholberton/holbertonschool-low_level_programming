#ifndef _VARIADIC_
#define _VARIADIC_

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct mia
{
        char *op;
        void (*f)(va_list arg);
} mia_t;


#endif
