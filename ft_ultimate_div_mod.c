#include "libft.h"

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;
    div = (*a / *b);
    mod = (*a % *b);
    // the result of the divided parameter is stored in 
    // the int pointed to by a and b;
    *a = div;
    *b = mod;
}
