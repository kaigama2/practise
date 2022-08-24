#include "libft.h"

int ft_atoi(char *str)
{
    int result;
    result = 0;
    int print_minus;
    print_minus = 1;
    while (*str == ' ' || *str == '\t' || *str == '\n')
    {
        str++;
    }
    // testing for more negative and positive number
    // in the parameter
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
        {
            // returning 1 which stands for true
            print_minus *= -1;
        }
            str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        // search the first position of the parameters and store the
        // character string in the int memory location/result
        result = result * 10 + (*str - '0');
        str++;
    }
    return (result * print_minus);
}