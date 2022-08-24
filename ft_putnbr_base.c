#include "libft.h"

int ft_base_cond(char *base)
{
	int i;
	int j;
	i = 0;
	j = 1;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
void ft_putnbr_base(int nbr, char *base)
{
	int dest[100];
	int i;
	int x;
	i = 0;
	x = 0;
	if (ft_base_cond(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[x])
		{
			x++;
		}
		while (nbr)
		{
			dest[i] = nbr % x;
			nbr = nbr / x;
			i++;
		}
		while (--i >= 0)
		ft_putchar(base[dest[i]]);
	}

}