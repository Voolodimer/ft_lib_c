/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyooden <hyooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:19:35 by hyooden           #+#    #+#             */
/*   Updated: 2020/05/11 20:45:21 by hyooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int				ft_strlen(const char *str);
size_t			ft_strlcpy(char *dst, const char *src, size_t dst_size);
char			*ft_strrchr(const char *str, int num_char);
char			*ft_strchr(const char *str, int num_char);
char			*ft_strnstr(const char *s1, const char *s2, size_t len_search);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_isalpha(int ch);
int				ft_isdigit(int ch);
int				ft_isalnum(int ch);
int				ft_isascii(int ch);
int				ft_isprint(int ch);
int				ft_toupper(int ch);
int				ft_tolower(int ch);
int				ft_atoi(const char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
void			*ft_memset (void *dest, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy (void *dest, const void *source, size_t n);
void			*ft_memccpy (void *dest, const void *source, int c, size_t n);
void			*ft_memmove (void *dest, const void *source, size_t n);
void			*ft_memchr (const void *arr, int c, size_t n);
int				ft_memcmp (const void *arr1, const void *arr2, size_t n);
void			*ft_calloc(size_t num, size_t size);
char			*ft_strdup(const char *str);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
#endif
