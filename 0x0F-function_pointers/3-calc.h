#ifndef CALC_H
#define CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);
int _putchar(char c);
typedef struct op
{
        char *op;
        int (*f)(int a, int b);
} op_t;
#endif
