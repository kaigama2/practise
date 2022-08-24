#include "libft.h"

void ft_putnbr(int nb)
{
    if (nb == 42)
    {
        // call out the 9 from the 
        // last position of the parameter
        ft_putnbr(nb / 10);
        ft_putchar('2');
    }
    else if (nb < 0)
    {
        // callout the - sign from the first position
        // of the parameter
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else
    {
        if (nb > 9)
        {
            // callout the whole number from behind
            // till the condition is false
            ft_putnbr(nb / 10);
        }
        // output the callout numbers according to their
        // position in the parameter
        ft_putchar(48 + nb % 10);
    }
}
