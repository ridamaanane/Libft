/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:53:37 by rmaanane          #+#    #+#             */
/*   Updated: 2024/11/06 02:56:24 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    unsigned char   *ptr;
    size_t          i;

    ptr = (unsigned char *)b;
    i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}
