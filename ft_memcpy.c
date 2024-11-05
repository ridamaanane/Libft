/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:53:06 by rmaanane          #+#    #+#             */
/*   Updated: 2024/11/05 03:21:17 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	if (destination == NULL || source == NULL || n == 0)
		return (destination);
	dest = (char *)destination;
	src = (const char *)source;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
