        #include "libft.h"

        char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
        {
            size_t len;
            unsigned int i;
            char *result;

            if (!s)
                return (NULL);
            len = ft_strlen(s);
            result = malloc (sizeof (char) * (len + 1));
            if (!result)
                return (NULL);
            i = 0;
            while (i < len)
            {
                result[i] = (*f)(i, s[i]);
                i++;
            }
            result[i] = '\0';
            return (result);

        }