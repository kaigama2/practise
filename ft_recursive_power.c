#include "libft.h"

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	// here if power is zero in the parameter it
	// will return 1 as required in the question
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
