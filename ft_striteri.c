/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:07:25 by rmaanane          #+#    #+#             */
/*   Updated: 2024/11/10 16:50:40 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
// void ft_upper(unsigned int i, char *str)
// {
// 	while (str[i] >= 'a' && str[i] <= 'z')
// 	{
// 		str[i] -= 32;
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	char	s[] = "ana rida";

// 	ft_striteri(s, ft_upper);
// 	printf("%s", s);
// }
