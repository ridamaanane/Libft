#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t sub_len;
    char *substr;
    size_t s_len;
    size_t i;

    if (!s)
        return (0);

    s_len = strlen(s);
    if (s_len <= start)
        return (strdup(""));

    sub_len = s_len - start;
    if (sub_len > len)
        sub_len = len;

    substr = malloc(sizeof(char) * (sub_len + 1));
    if (!substr)
        return (substr);

    i = 0;
    while (i < sub_len)
    {
        substr[i++] = s[start++];
    }
    substr[i] = '\0';

    return (substr);
}