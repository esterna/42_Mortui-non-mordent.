/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 10:04:44 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 12:38:41 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ft_strchr(const char *str, int c)
{
	const char *tmp;

	tmp = str;
	while (*tmp != (char)c && *tmp != '\0')
		tmp++;
	if (*tmp == (char)c)
		return (tmp);
	return (0);
}
