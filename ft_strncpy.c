/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 18:28:14 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 12:30:37 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i] != 0)
		i++;
	return (i);
}

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
	while (i < n && i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	if (n > len)
	{
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
		dest[++i] = '\0';
	return (dest);
}
