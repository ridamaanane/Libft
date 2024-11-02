/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:54:46 by rmaanane          #+#    #+#             */
/*   Updated: 2024/10/22 00:54:46 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;
    while (s1[i] && s2[i] && i < n)
    {
		  if (s1[i] > s2[i])
			  return (1);
		  else if (s1[i] < s2[i])
			  return (-1);
		  i++;
    }
    return (0);
}