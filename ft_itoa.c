#include <stdio.h>

size_t atoi_len(int n)
{
    size_t len;
	
    len = 0;
    if (n == 0)
        len++;
    if (n < 0)
    {
        len++;
        n = -n;
    }
    while(n != 0)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

int	main(void)
{
    printf("Test for 0: %zu\n", atoi_len(0));         // Should print 1
    printf("Test for 5: %zu\n", atoi_len(5));         // Should print 1
    printf("Test for 123: %zu\n", atoi_len(123));     // Should print 3
    printf("Test for -5: %zu\n", atoi_len(-5));       // Should print 2
    printf("Test for -123: %zu\n", atoi_len(-123));   // Should print 4
    printf("Test for 2147483647: %zu\n", atoi_len(2147483647));     // Should print 10
    printf("Test for -2147483648: %zu\n", atoi_len(-2147483648));   // Should print 11
    return (0);
}

// char	*ft_itoa(int n)
// {
// 	char *buff;
// 	size_t i;
// 	len = atoi_len(n) + 1;

// 	buff = malloc(sizeof(char) * len);
// 	if (!buff)
// 		return (NULL);
	
// 	while 
// }