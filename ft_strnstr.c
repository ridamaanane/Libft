#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    char *s1;
    char *s2;
 
    size_t i;
    size_t j;
    size_t backup;

    
    s1 = (char *) haystack;
    s2 = (char *) needle;
    i = 0;
    if (ft_strlen(s2) == 0) 
        return (s1);
    while (s1[i] != '\0' && i < n)
    {
        backup = i;
        j = 0;
        while (s2[j] == s1[backup] && s2[j] != '\0' && backup < n )
        {
            j++;
            backup++;
        }
        if (s2[j] == '\0')
            return (&s1[i]);
        i++;    
        }
    return (NULL);
}