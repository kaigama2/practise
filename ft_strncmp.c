#include "libft.h"

int ft_strncmp(char *s1, char *s2, size_t n)
{
    while (*s1 != '\0' && *s1 == *s2 && 0 < n)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}