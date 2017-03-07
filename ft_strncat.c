/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 09:40:17 by esterna           #+#    #+#             */
/*   Updated: 2017/03/03 18:34:14 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t n)
{
	size_t		i;
	char		*tmp;

	i = 0;
	tmp = dest;
	if (n == 0)
		return (dest);
	while (*tmp != '\0')
		tmp++;
	while (*src != '\0' && i < n)
	{
		*tmp = *src;
		tmp++;
		src++;
		i++;
	}
	*tmp = '\0';
	return (dest);
}
