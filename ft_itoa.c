/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 18:44:21 by esterna           #+#    #+#             */
/*   Updated: 2017/03/07 00:42:27 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int			nbr_size(int n)
{
	int len;

	len = 1;
	if (n <= 0)
	{
		n = n * -1;
		len++;
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char				*ft_itoa(int n)
{
	int		neg;
	int		len;
	char		*nbr;

	neg = 0;
	len = nbr_size(n);
	if (n < 0)
	{
		neg = 1;
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		n = n * -1;
	}
	nbr = (char *)malloc(sizeof(char) * len);
	if (!nbr)
		return (NULL);
	nbr[--len] = '\0';
	len--;
	while (len)
	{
		nbr[len--] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		nbr[len] = '-';
	else
		nbr[len] = n % 10 + '0';
	return (nbr);
}
