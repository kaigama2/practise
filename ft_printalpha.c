#include "libft.h"

void ft_printalpha(void)
{
	char c;
	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}
