#include "libft.h"

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int i;
    i = 0;
    while (src[i] != '\0' && i < size)
    {
        i++;
    }
    return (i);
}
