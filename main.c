/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 14:38:44 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 19:38:46 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main()
{
	char p1[8] = "cat";
	char *p2 = "cart";

	printf("%lu\n", strlcat(p1, p2, 7));
	printf("%u\n", ft_strlcat(p1, p2, 7));

	return (0);
}
