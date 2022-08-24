#include "libft.h"

void ft_printrev(void)
{
	char c;
	c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
}
