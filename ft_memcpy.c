/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:53:06 by rmaanane          #+#    #+#             */
/*   Updated: 2024/10/22 00:53:11 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy ( void *destination, const void *source, size_t n )
{
    char *dest;
    char *src;
    int i;

    dest = destination;
    src  = (char *) source ;

    if (dest == 0 || src == 0)
        return (NULL);
    i = 0;
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
}