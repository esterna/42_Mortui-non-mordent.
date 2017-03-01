/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 10:09:39 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 17:08:49 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char *tmp;

	tmp = (char *)str;
	while (*tmp != '\0')
		tmp++;
	while (*tmp != (char)c && tmp != str)
		tmp--;
	if (*tmp == (char)c)
		return (tmp);
	return (0);
}
