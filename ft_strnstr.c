/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 10:30:58 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 12:31:48 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	int i;
	int n;

	if (needle == 0 || *needle == '\0')
		return (haystack);
	while (*haystack != '\0' && len > 0)
	{
		i = 0;
		n = 0;
		while (haystack[n] == needle[i] &&
				needle[i] != '\0' && haystack[n] != '\0')
		{
			n++;
			i++;
		}
		if (needle[i] == '\0')
			return (haystack);
		haystack++;
		len--;
	}
	return (0);
}
