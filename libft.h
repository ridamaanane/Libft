#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#ifndef LIBFT_H
#define LIBFT_H


size_t    ft_strlen(const char *s);
int	ft_str_is_alpha(char *str);
int	ft_str_is_digit(char *str);
int ft_str_is_isalnum(char *str);
int ft_str_is_ascii(char *str);
int ft_str_is_print(char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	ft_atoi(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char	*ft_strdup(char *src);
char *ft_strnstr(const char *s1, const char *s2, size_t n);
void *ft_memcpy ( void *destination, const void *source, size_t n );
void *ft_memset(void *s, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void ft_bzero(void *s, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_calloc(size_t count, size_t size);
size_t strlcpy(char *dst, const char *src, size_t dstsize);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(const char *s, char c);
char *ft_itoa(int n);

#endif


