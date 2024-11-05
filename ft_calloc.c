/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:03:13 by rmaanane          #+#    #+#             */
/*   Updated: 2024/11/05 07:12:27 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;

	temp = malloc(count * size);
	if (temp == NULL)
		return (NULL);
	ft_memset(temp, 0, sizeof(count * size));
	return ((void *)temp);
}
