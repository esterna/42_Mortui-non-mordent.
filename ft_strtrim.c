/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 17:51:31 by esterna           #+#    #+#             */
/*   Updated: 2017/03/02 18:05:16 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int len;
	char *tmp;

	i = 0;
	len = ft_strlen((char *)s);
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	if (tmp == NULL)
		return (NULL);
	while (*s)
	{
		if ((i == 0 || i == (len - 1)) && *s == ' ' && *s == '\n' && *s == '\t')
		{
			i++;
			s++;
		}
		else
		{
			tmp[i] = *s;
			i++;
			s++;
		}
	}
	tmp[i] = '\0';
	return (tmp);
}
