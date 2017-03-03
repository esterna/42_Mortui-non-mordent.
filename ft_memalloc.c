/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:57:55 by esterna           #+#    #+#             */
/*   Updated: 2017/03/02 16:35:18 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t i;
	void *tmp;

	i = 0;
	tmp = (void *)malloc(size);
	if (tmp == NULL)
		return (NULL);
	while (i < size)
	{
		((char *)tmp)[i] = 0;
		i++;
	}
	return (tmp);
}
