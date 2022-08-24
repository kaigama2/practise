#include "libft.h"

void ft_write_comb(char a, char b, bool last)
{
	ft_putchar(48 + a % 10);
	ft_putchar(48 + b % 10);
	if (last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
void ft_printcomb(void)
{
	int a;
	int b;
	bool last;
	a = 0;
	while (a <= 1)
	{
		b = a + 1;
		while (b <= 9)
		{
			last = !(a == 2 && b == 4);
			ft_write_comb(a, b, last);
			b++;
		}
		a++;
	}
}
