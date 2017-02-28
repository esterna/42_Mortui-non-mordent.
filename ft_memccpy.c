/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 14:35:29 by esterna           #+#    #+#             */
/*   Updated: 2017/02/27 14:41:03 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memccpy(void *dest, void *src, int c, unsigned int n)
{
	int i;
	void *tmp;

	i = 0;
	tmp = dest;
	while (tmp[i] != c && i < n)
	{
		tmp[i] = src[i];
		i++;
	}
	if (tmp[i] == c)
		return (tmp = tmp + i + 1);
	else
		return (tmp = 0);
}
