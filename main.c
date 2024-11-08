#include "libft.h"

int main(void)
{
    t_list *list = NULL;
    t_list *first = malloc(sizeof(t_list));
    
    first->content = "123";
    first->next = NULL;
    
    ft_lstadd_front(&list, first);
    printf("%s\n", (char *)list->content);
    
    free(first);
    return (0);
}