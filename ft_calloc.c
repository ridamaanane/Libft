#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *temp;

    temp = malloc(count * size);

    if (temp == NULL)
    {
        return (NULL);
    }

    ft_memset(temp, 0, sizeof(count * size));
    
    return ((void *) temp);
}