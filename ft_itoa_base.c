/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 19:16:48 by esterna           #+#    #+#             */
/*   Updated: 2017/03/12 20:24:27 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			nbr_size(int n, int base)
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
		n = n / base;
		len++;
	}
	return (len);
}

static char			*str_setup(int n, int base)
{
	int		len;
	char	*nbr;

	len = nbr_size(n, base);
	nbr = (char *)malloc(sizeof(char) * len);
	if (!nbr)
		return (NULL);
	nbr[--len] = '\0';
	if (n < 0)
		*nbr = '-';
	return (nbr);
}

char				*ft_itoa_base(int n, int base)
{
	int		neg;
	int		len;
	char	*nbr;

	neg = 0;
	if (base < 2)
		return (NULL);
	len = nbr_size(n, base) - 2;
	nbr = str_setup(n, base);
	if (n < 0)
	{
		neg = 1;
		n = n * -1;
	}
	if (!nbr)
		return (NULL);
	while (len)
	{
		nbr[len--] = n % base + '0';
		n = n / base;
	}
	if (nbr[len] != '-')
		nbr[len] = n % base + '0';
	return (nbr);
}
