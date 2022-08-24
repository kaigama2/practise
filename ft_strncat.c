#include "libft.h"

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    i = 0;
    while (src[i] != '\0' && i < nb)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}