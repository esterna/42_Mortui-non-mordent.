/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 14:35:29 by esterna           #+#    #+#             */
/*   Updated: 2017/03/03 17:57:57 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	unsigned char		*tmp_d;
	unsigned char		*tmp_s;

	tmp_d = (unsigned char *)dest;
	tmp_s = (unsigned char *)src;
	while (*tmp_s != (unsigned char)c && n)
	{
		*tmp_d++ = *tmp_s++;
		n--;
	}
	if (*tmp_s == (unsigned char)c)
	{
		*tmp_d++ = *tmp_s++;
		return (tmp_d);
	}
	return (tmp_d = 0);
}
