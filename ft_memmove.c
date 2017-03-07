/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 11:40:11 by esterna           #+#    #+#             */
/*   Updated: 2017/03/06 17:19:15 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_d;
	unsigned char	*tmp_s;

	i = 0;
	tmp_d = (unsigned char *)dest;
	tmp_s = (unsigned char *)src;
	while (i < n)
	{
		tmp_d[i] = tmp_s[i];
		i++;
	}
	return (dest);
}
