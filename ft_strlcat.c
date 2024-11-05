/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:54:32 by rmaanane          #+#    #+#             */
/*   Updated: 2024/11/05 05:59:25 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	size_src;
	unsigned int	size_dest;
	unsigned int	i;
	unsigned int	j;

	size_dest = 0;
	size_src = 0;
	i = 0;
	j = 0;
	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	if (size == 0 || size_dest >= size)
		return (size + size_src);
	j = size_dest;
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (size_src + size_dest);
}
