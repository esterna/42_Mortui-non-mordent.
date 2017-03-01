/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 09:51:27 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 19:43:46 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				n;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	dlen = (unsigned int)ft_strlen(dest);
	slen = (unsigned int)ft_strlen(src);
	printf("%u\n", dlen);
	printf("%u\n", slen);
	n = size - ft_strlen(dest) - 1;
	if (dlen >= size)
		return (slen + (size == dlen ? dlen : size));
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dlen + slen);
}
