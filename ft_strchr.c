/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 10:04:44 by esterna           #+#    #+#             */
/*   Updated: 2017/03/03 18:01:01 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char *tmp;

	tmp = (char *)str;
	while (*tmp != (char)c && *tmp != '\0')
		tmp++;
	if (*tmp == (char)c)
		return (tmp);
	return (0);
}
