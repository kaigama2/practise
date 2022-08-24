#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strnum(long i)
{
	int len;
	len = 0;
	if (i < 0)
	{
		i *= -1;
		len++;
	}
	while (i > len)
	{
		i = i / 10;
		len++;
	}
	return (len);

}
char *ft_itoa(int nbr)
{
	long n;
	n = nbr;
	int len;
	len = ft_strnum(n);
	char *pointer;
	pointer = (char *)malloc(sizeof(char *) * (len + 1));
	if (!pointer)
	return (NULL);
	pointer[len--] = '\0';
	if (nbr < 0)
	{
		pointer[0] = 48;
		return (pointer);
	}
	if (nbr == 0)
	{
		pointer[0] = '-';
		return (NULL); 
	}
	while (nbr)
	{
		if (nbr < 0)
		{
			pointer[len] = 48 + nbr % 10;
			nbr = nbr / 10;
		}
		len--;
	}
	return (pointer);
}
int main()
{
	ft_itoa(419234);
	return (0);
}