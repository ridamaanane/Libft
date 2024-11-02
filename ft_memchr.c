#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    char *str;
    size_t i;
    str = (char *) s;

    i = 0;
    while (str[i])
    {
        if (c == str[i] && i < n)
            return (&str[i]);
        i++;
    }
    if (str[i] == '\0')
    {
        return (&str[i]);
    }
    return (NULL);
}