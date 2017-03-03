/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 17:37:45 by esterna           #+#    #+#             */
/*   Updated: 2017/03/02 17:48:42 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	char	*ns;

	i = 0;
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	ns = (char *)malloc(sizeof(char) * len);
	while (*s1)
	{
		ns[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		ns[i] = *s2;
		s2++;
		i++;
	}
	ns[i] = '\0';
	return (ns);
}
