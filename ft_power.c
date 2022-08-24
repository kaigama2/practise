#include "libft.h"

int ft_power(int nbr, int power)
{
	int result = nbr;
	// here: power is used to iterate the loop
	while (power > 1)
	{
		result = result * nbr;
		power--;
	}
	return (result);
}
