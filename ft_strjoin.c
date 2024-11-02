#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    size_t len_s1;
    size_t len_s2;
    char *result;

    if (!s1 || !s2)
        return (NULL);
        
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    
    result = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
    if (!result)
        return (NULL);
    
    i = 0;
    while (s1[i])
    {
        result[i] = s1[i];
        i++;        
    }
    
    j = 0;
    while (s2[j])
    {
        result[i] = s2[j];
        i++;
        j++;
    }
    result[i] = '\0';
    return (result);
}
