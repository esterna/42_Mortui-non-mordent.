/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 17:51:31 by esterna           #+#    #+#             */
/*   Updated: 2017/03/06 22:57:01 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char		*first_word(char const *s)
{
	char *tmp;

	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	tmp = (char *)s;
	return (tmp);
}

static char		*last_word(char const *s)
{
	char *tmp;

	while (*s)
		s++;
	s--;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s--;
	tmp = (char *)s;
	return (tmp);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	char	*tmp;
	char	*first;
	char	*last;

	i = 0;
	first = first_word(s);
	last = last_word(s) + 1;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (tmp == NULL)
		return (NULL);
	while (*s && s != first)
		s++;
	while (*s && s != last)
	{
		tmp[i] = *s;
		i++;
		s++;
	}
	tmp[i] = '\0';
	return (tmp);
}
