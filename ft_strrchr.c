/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:07:59 by rmaanane          #+#    #+#             */
/*   Updated: 2024/11/06 03:54:52 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		j;

	str = (char *)s;
	j = ft_strlen(str);
	if (str[j] == '\0' && c == '\0')
		return (&str[j]);
	j--;
	while (str[j])
	{
		if (str[j] == c)
			return (&str[j]);
		j--;
	}
	return (NULL);
}
