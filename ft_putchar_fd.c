/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaanane <rmaanane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 03:06:29 by rmaanane          #+#    #+#             */
/*   Updated: 2024/11/12 19:31:01 by rmaanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
//     int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    
//     if (fd == -1)
//     {
//         write(2, "Error creating file\n", 19);
//         return (1);
//     }

//     ft_putchar_fd('H', fd);
//     ft_putchar_fd('1', fd);
//     ft_putchar_fd('1', fd);
//     ft_putchar_fd('l', fd);
//     ft_putchar_fd('o', fd);
//     ft_putchar_fd('\n', fd);

//     close(fd);

//     return (0);
// }