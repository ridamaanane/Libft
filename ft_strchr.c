#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char *str;
    int i;
    str = (char *) s;

    i = 0;

    while (str[i])
    {
        if (c == str[i])
            return (&str[i]);

        i++;
    }
    if (c == '\0' && str[i] == '\0')
            return (&str[i]);

    return (NULL);
}