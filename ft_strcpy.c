/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 01:37:20 by esterna           #+#    #+#             */
/*   Updated: 2017/03/03 18:01:38 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	char *cpydst;

	cpydst = dest;
	while (*src != 0)
		*cpydst++ = *src++;
	*cpydst = *src;
	return (dest);
}
