#include "libft.h"

char *ft_strcat(char *dest, char *src)
{
// check the s1 to the terminating null which will
// be override be the dest str null terminated string
    int i;
    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
