#include "libft.h"

int ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	// if handling the factorial of the given number
	// is true return 1 and 1 in the expression by
	// default is factorial least num, no factorial
	// have ever started with one take note of that
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}