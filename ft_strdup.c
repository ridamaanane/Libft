/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:54:24 by rmaanane          #+#    #+#             */
/*   Updated: 2024/11/10 16:15:12 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char *str = "\0";
// 	char *ptr = ft_strdup(str);

// 	printf ("%s", ptr);

// 	free (ptr);
// }
