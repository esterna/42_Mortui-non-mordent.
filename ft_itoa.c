/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 18:44:21 by esterna           #+#    #+#             */
/*   Updated: 2017/03/02 19:12:08 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int			nbr_size(int n)
{
	int len;

	len = 1;
	if (n < 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

char		*ft_itoa(int n)
{
	int		i;
	int		neg;
	int		len;
	char	*nbr;

	i = 0;
	neg = 0;
	len = nbr_size(n);
	if (n < 0)
	{
		neg = 1;
		if (n == -2147483648)
			return(ft_strdup("-2147483648"));
		n = n * -1;
	}
	nbr = (char *)malloc(sizeof(char) * len);
	nbr[len--] = '\0';
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
