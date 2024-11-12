#include "libft.h"

int main(void)
{
    int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    
    if (fd == -1)
    {
        write(2, "Error creating file\n", 19);
        return (1);
    }

    ft_putchar_fd('H', fd);
    ft_putchar_fd('e', fd);
    ft_putchar_fd('1', fd);
    ft_putchar_fd('l', fd);
    ft_putchar_fd('o', fd);
    ft_putchar_fd('\n', fd);

    close(fd);

    return (0);
}