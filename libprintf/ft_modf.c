/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/22 15:37:04 by esterna           #+#    #+#             */
/*   Updated: 2017/07/20 14:21:25 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

double		modf(double x, double *integer)
{
	*integer = (int)x;
	return (ft_fmod(x, 1.0));
}
