#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    unsigned int nb;

    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        nb = -n;
    }
    else
        nb = n;
    if (nb > 9)
        ft_putnbr_fd(nb / 10, fd);
    ft_putchar_fd((char)(nb % 10 + '0'), fd);
}