#include "libft.h"

char *ft_strstr(char *str, char *cutoff)
{
    int i;
    int x;
    i = 0;
    x = 0;
    // terminating the substring
    // here we're return a pointer to the begining of 
    // the substring
    if (cutoff[x] == '\0')
    // return substring in str
        return (str);
    while (str[i])
    {
        // search first occurrence of the substring
        // cutoff[x] in str[i + x]
        while (str[i + x] == cutoff[x])
        {
            // search for the last position
            // in the substring
            if (cutoff[i + 1] == '\0')
            {
                // take the string address to the 
                // next call
                return (&str[i]);
            }
            x++;
        }
        i++;
    }
    return (0);
}