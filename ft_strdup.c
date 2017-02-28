/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:06:13 by esterna           #+#    #+#             */
/*   Updated: 2017/02/27 13:07:45 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_strlen(char *str)
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

char			*ft_strdup(char *src)
{
	char *cp;

	cp = malloc(ft_strlen(src) + 1);
	if (cp == 0)
		return (0);
	ft_strcpy(cp, src);
	return (cp);
}
