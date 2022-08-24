#include "libft.h"

int ft_strcmp(char *s1, char *s2)
{
    // the loop takes the pointer to each character
    // in the memory location
    while (*s1 != '\0' && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return ((unsigned char *)s1 - (unsigned char *)s2);
}
