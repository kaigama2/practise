#include "libft.h"

void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int x;
    i = 0;
    while (i < size)
    {
        x = i;
        while (x < size)
        {
            if (tab[i] >= tab[x])
            {
                ft_swap(&tab[i], &tab[x]);
            }
            x++;
        }
        i++;
    }
}
