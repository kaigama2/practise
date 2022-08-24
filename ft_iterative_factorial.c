#include "libft.h"

int ft_iterative_factorial(int nb)
{
    int i;
    int factorial;
    i = 1;
    factorial = 1;
    if (0 > nb)
        return (0);
    // start iterating from i to nb searching
    // for the last position of the parameter given
    while (i < nb + 1)
    {
        factorial = factorial * i;
        i++;
    }
    return (factorial);
}