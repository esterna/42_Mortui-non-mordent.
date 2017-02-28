/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 14:35:29 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 12:54:14 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, void *src, int c, unsigned int n)
{
	unsigned int		i;
	unsigned char		*tmp_d;
	unsigned char		*tmp_s;

	i = 0;
	tmp_d = (unsigned char *)dest;
	tmp_s = (unsigned char *)src;
	while (tmp_d[i] != (unsigned char)c && i < n)
	{
		tmp_d[i] = tmp_s[i];
		i++;
	}
	if (tmp_d[i] == (unsigned char)c)
		return (tmp_d = tmp_d + i + 1);
	else
		return (tmp_d = 0);
}
