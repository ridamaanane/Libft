/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:54:24 by rmaanane          #+#    #+#             */
/*   Updated: 2024/10/26 21:58:20 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
    int size_src = ft_strlen(src);

    if (size_src == 0)
        return (NULL);
    
    char *dest = malloc (sizeof(char) * size_src + 1);

    if (dest == NULL)
    {
        return (NULL);
    }

    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
