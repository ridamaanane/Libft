#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *str;
    str = (char *) s;

    int j = ft_strlen(str);
    j--;

    while (str[j])
    {
        if (c == str[j])
            return (&str[j]);
        j--;
    }
    if (str[j] == '\0')
    {
        return (&str[j]);
    }

    return (NULL);
}