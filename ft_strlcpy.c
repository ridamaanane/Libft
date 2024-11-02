#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    unsigned int i;
    unsigned int size_src = ft_strlen(src);

    if (dstsize == 0)
        return (size_src);

    i = 0;
    while (src[i] && i < dstsize - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (size_src);
}