/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:06:56 by rmaanane          #+#    #+#             */
/*   Updated: 2024/11/05 03:36:18 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(const char *str, char c)
{
	size_t	i;
	size_t	word;
	size_t	count;

	i = 0;
	word = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (word == 0)
			{
				word++;
				count++;
			}
		}
		else
			word = 0;
		i++;
	}
	return (count);
}

int	ft_wordlen(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	*ft_wordcpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	size;
	size_t	len_word;
	char	**result;

	if (!s)
		return (NULL);
	size = ft_countwords(s, c);
	result = malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		while (*s == c)
			s++;
		len_word = ft_wordlen(s, c);
		result[i] = malloc(sizeof(char) * (len_word + 1));
		if (!result[i])
			return (NULL);
		ft_wordcpy(result[i++], s, len_word);
		s += len_word;
	}
	result[i] = NULL;
	return (result);
}
