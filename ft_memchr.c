/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:06:09 by rmaanane          #+#    #+#             */
/*   Updated: 2024/11/05 03:20:02 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (c == str[i] && i < n)
			return (&str[i]);
		i++;
	}
	if (str[i] == '\0')
	{
		return (&str[i]);
	}
	return (NULL);
}
