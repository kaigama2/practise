#include "libft.h"

void ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i;
    i = 0;
    while (i < size/2)
    {
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
        i++;
    }
}