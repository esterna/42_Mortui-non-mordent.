/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:06:13 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 19:01:26 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strlen(const char *str)
{
	int n;
	int i;

	n = 0;
	i = 0;
	while (str[i] != 0)
	{
		n++;
		i++;
	}
	return (n);
}

static char		*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char			*ft_strdup(const char *src)
{
	char *cp;

	cp = (char *)malloc(ft_strlen(src) + 1);
	if (cp == 0)
		return (0);
	ft_strcpy(cp, (char *)src);
	return (cp);
}
