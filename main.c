#include "libft.h"

int main() {
    const char *str = "Hello, world!";
    int c = '\0';
    char *result;

    result = ft_strrchr(str, c);
    if (result) {
        printf("Found '%c' at position: %ld\n", c, result - str);
    } else {
        printf("Character '%c' not found.\n", c);
    }

    return 0;
}
