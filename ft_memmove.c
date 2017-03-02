/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 11:40:11 by esterna           #+#    #+#             */
/*   Updated: 2017/03/02 14:24:40 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*tmp;
	unsigned char	*tmp_d;
	unsigned char	*tmp_s;

	i = 0;
	tmp = (unsigned char *)malloc(sizeof(unsigned char) * n);
	tmp_d = (unsigned char *)dest;
	tmp_s = (unsigned char *)src;
	while (i < n)
	{
		tmp[i] = tmp_s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		tmp_d[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dest);
}
