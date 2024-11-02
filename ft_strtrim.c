#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    char *str;

    if (!s1 || !set)
        return (NULL);
    
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    
    str = malloc(end - start + 1);
    if (!str)
        return (NULL);
    

    int i = 0;
    while (start < end)
    {
        str[i] = s1[start];
        i++;
        start++;
    }
    str[i] = '\0';
    
    return (str);
}