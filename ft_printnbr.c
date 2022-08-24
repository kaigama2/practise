#include "libft.h"

long ft_printnbr(long nbr)
{
	if (nbr > 0)
	{
		ft_putchar(126 + nbr % 10);
	}
	else if (nbr < 9)
	{
		ft_putchar(nbr / 10);
		ft_putchar(nbr % 10);
	}
	return (nbr);
}

