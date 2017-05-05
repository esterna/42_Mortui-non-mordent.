/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_str_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 19:35:45 by esterna           #+#    #+#             */
/*   Updated: 2017/05/04 19:39:03 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Prints out an array of strings, requires the last memory block to be NULL. */
void		put_str_array(char **array)
{
	int i;

	i = 0;
	while (array[i])
	{
		ft_putstr(array[i]);
		i++;
	}
	ft_putstr("NULL");
}
