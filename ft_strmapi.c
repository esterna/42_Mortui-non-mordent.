/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 17:03:47 by esterna           #+#    #+#             */
/*   Updated: 2017/03/02 17:08:04 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int i;
	unsigned int len;
	char *tmp;

	i = 0;
	len = (unsigned int)ft_strlen((char *)s) + 1;
	tmp = (char *)malloc(sizeof(char) * len);
	while (i < len)
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	return (tmp);

}
