/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:03:13 by rmaanane          #+#    #+#             */
/*   Updated: 2024/11/09 13:12:46 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			total_size;

	if (count > 0 && size > SIZE_MAX / count)
		return (NULL);
	total_size = count * size;
	temp = malloc(total_size);
	if (temp == NULL)
		return (NULL);
	ft_memset(temp, 0, total_size);
	return ((void *)temp);
}

// int main()
// {
//(dik 5 kat3ni anakhdo 5 blays linteger o an7to fih size dyall int lihowa 4)
//     int *ptr = ft_calloc(5, sizeof(int));

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d\n", ptr[i]);
//     }

//     free(ptr);
//     return (0);
// }
