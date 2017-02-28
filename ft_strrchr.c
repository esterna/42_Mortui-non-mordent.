/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 10:09:39 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 12:32:41 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ft_strrchr(const char *str, int c)
{
	const char *tmp;

	tmp = str;
	while (tmp != '\0')
		tmp++;
	while (*tmp != (const char)c && *tmp != *str)
		tmp--;
	if (*tmp == (const char)c)
		return (tmp);
	return (0);
}
