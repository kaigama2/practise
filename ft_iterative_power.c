#include "libft.h"

int ft_iterative_power(int nb, int power)
{
	int result;
	result = nb;
	if (power < 0)
		return (0);
	// else if is to meetup the condition that says
	// if power is 0 we're going to return 1
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
