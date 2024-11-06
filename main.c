#include "libft.h"

int	main(void)
{
	const char	*str = "Hello, world!";
	int			c;
	char		*result;

	c = '\0';
	result = ft_strrchr(str, c);
	if (result)
	{
		printf("Found '%c' at position: %ld\n", c, result - str);
	}
	else
	{
		printf("Character '%c' not found.\n", c);
	}
	return (0);
}
