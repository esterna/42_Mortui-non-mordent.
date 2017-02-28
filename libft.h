/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 17:04:48 by esterna           #+#    #+#             */
/*   Updated: 2017/02/27 13:14:49 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int		ft_atoi(char *str);

void	ft_putchar(char c);

void	ft_putstr(char *str);

char	*ft_strdup(char *src);

int		ft_strcmp(char *s1, char *s2);

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		ft_strlen(char *str);

void	ft_swap(int *a, int *b);

void	ft_putnbr(int nb);

#endif
