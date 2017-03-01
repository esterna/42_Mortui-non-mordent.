/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 09:40:17 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 18:15:08 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int		i;
	char				*tmp;

	i = 0;
	tmp = dest;
	if (n == 0)
		return (dest);
	while (*tmp != '\0')
		tmp++;
	while (*src != '\0' && i < n)
	{
		*tmp = *src;
		tmp++;
		src++;
		i++;
	}
	*tmp = '\0';
	return (dest);
}
