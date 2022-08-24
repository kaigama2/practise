#include "libft.h"

char *ft_strcapitalize(char *str)
{
    int i;
    i = 1;
    if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] -= 32;
    }
    while (str[i] != '\0')
    {
        // str[i - 1] means remove all last string position
        // <= 48 means checking for printable character
        if (str[i - 1] <= 39 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;
    }
    return (str);
}
