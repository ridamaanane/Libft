#include "libft.h"

char my_func(unsigned int i, char str)
{
    printf("My inner function: index = %d and %c\n", i, str);
    if (str >= 'a' && str <= 'z')
        return (str - 32);
    return str;
}

int main()
{

    char str[] = "Hello.123!1321556hhh0      wtwet zzt ";
    printf("\nTest 2:\nOriginal string: %s\n", str);
    char *result = ft_strmapi(str, my_func);
    printf("Transformed string: %s\n", result);
    free(result);

    return 0;
}