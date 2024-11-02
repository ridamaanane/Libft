#include "libft.h"
#include <stdio.h>

char my_func(unsigned int i, char str)
{
    printf("My inner function: index = %d and %c\n", i, str);
    if (str >= 'a' && str <= 'z')
        return (str - 32);
    return str;
}

int main()
{
    char str[10] = "hello.";
    printf("The original string is: %s\n", str);
    
    char *result = ft_strmapi(str, my_func);
    printf("The result is: %s\n", result);
    
    free(result);
    
    return 0;
}