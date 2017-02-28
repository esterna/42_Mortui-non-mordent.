/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 13:48:23 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 12:40:08 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_memset(void *src, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*tmp;

	i = 0;
	tmp = src;
	while (i < n)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (src);
}
