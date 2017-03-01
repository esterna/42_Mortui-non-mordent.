/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 17:04:48 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 15:10:11 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int				ft_atoi(char *str);

void			ft_bzero(void *src, unsigned int n);

int				ft_isalnum(int n);

int				ft_isalpha(int n);

int				ft_isascii(int n);

int				ft_isdigit(int n);

int				ft_isprint(int c);

void			*ft_memccpy(void *dest, void *src, int c, unsigned int n);

void			*ft_memchr(void *str, int c, unsigned int n);

int				ft_memcmp(void *s1, void *s2, unsigned int n);

void			*ft_memcpy(void *dest, void *src, unsigned int n);

void			*ft_memmove(void *dest, void *src, unsigned int n);

void			*ft_memset(void *src, int c, unsigned int n);

void			ft_putchar(char c);

void			ft_putnbr(int nb);

void			ft_putstr(char *str);

char			*ft_strcat(char *dest, char *src);

char			*ft_strchr(const char *str, int c);

char			*ft_strcpy(char *dest, char *src);

char			*ft_strdup(char *src);

int				ft_strcmp(char *s1, char *s2);

int				ft_strncmp(char *s1, char *s2, unsigned int n);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				ft_strlen(char *str);

char			*ft_strncat(char *dest, char *src, unsigned int n);

char			*ft_strncpy(char *dest, char *src, unsigned int n);

char			*ft_strnstr(const char *haystack, const char *needle, unsigned int len);

char			*ft_strrchr(const char *str, int c);

char			*ft_strstr(const char *haystack, const char *needle);

void			ft_swap(int *a, int *b);

int				ft_tolower(int c);

int				ft_toupper(int c);

#endif
