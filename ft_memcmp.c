/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 16:08:11 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 13:02:17 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_memcmp(void *s1, void *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*tmp1;
	unsigned char	*tmp2;

	i = 0;
	tmp1 = (unsigned char *)s1;
	tmp2 = (unsigned char *)s2;
	while (i < n && tmp1 == tmp2)
	{
		tmp1++;
		tmp2++;
		i++;
	}
	if (i == n)
		return (0);
	return (tmp1 - tmp2);
}
