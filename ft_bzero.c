/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 13:59:40 by esterna           #+#    #+#             */
/*   Updated: 2017/03/03 17:53:27 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_bzero(void *src, size_t n)
{
	size_t		i;
	char		*tmp;

	i = 0;
	tmp = src;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
}
