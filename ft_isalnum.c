/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 11:04:34 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 11:47:53 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_isalpha(int n)
{
	if ((65 <= n && n <= 90) || (97 <= n && n <= 122))
		return (1024);
	return (0);
}

static int		ft_isdigit(int n)
{
	if (48 <= n && n <= 57)
		return (1);
	return (0);
}

int				ft_isalnum(int n)
{
	if (ft_isdigit(n) || ft_isalpha(n))
		return (1);
	return (0);
}
