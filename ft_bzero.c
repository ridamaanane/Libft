/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 05:50:26 by rmaanane          #+#    #+#             */
/*   Updated: 2024/11/05 07:47:23 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    char    *str;
    size_t  i;

    str = s;
    i = 0;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}

// int main()
// {
//     char s[10] = "rida";
    
//     printf("before: %s\n", s);
//     ft_bzero(s, 2);

//     for (int i = 0; i < 4; i++)
//         printf("after %d %c\n", s[i] ,s[i]);
//     printf("\n");

//     return (0);
// }