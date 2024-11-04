#include "libft.h"

int main()
{
    int fd = open("file.txt",O_WRONLY | O_CREAT | O_TRUNC , 0644);

    if (fd == -1)
    {
        write (2, "error\n", 6);
        return (1);
    }

    ft_putnbr_fd(-2147483648 , fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(1337 , fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(-1337 , fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(-0 , fd);
    ft_putchar_fd('\n', fd);
    ft_putnbr_fd(0 , fd);

    close(fd);

    return (0);
}
