#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
        int sum = 0;
        int i;
        va_list number;

        va_start(number, n);

        for (i = 0; i < n; i++)
        {
                sum += va_arg(number, int);
        }
        va_end(number);

        return(sum);
}