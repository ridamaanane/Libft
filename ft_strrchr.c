/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:07:59 by rmaanane          #+#    #+#             */
/*   Updated: 2024/11/05 03:32:50 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		j;

	str = (char *)s;
	j = ft_strlen(str);
	j--;
	while (str[j])
	{
		if (c == str[j])
			return (&str[j]);
		j--;
	}
	if (str[j] == '\0')
	{
		return (&str[j]);
	}
	return (NULL);
}
