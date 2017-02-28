/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 14:50:03 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 13:12:46 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *str, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)str;
	while (i < n)
	{
		if (*tmp == (unsigned char)c)
			return (str);
		tmp++;
		str++;
		i++;
	}
	return (0);
}
