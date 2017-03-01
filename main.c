/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 14:38:44 by esterna           #+#    #+#             */
/*   Updated: 2017/02/28 20:57:07 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main()
{
//:w
//char p1[8] = "giraffe";
	char p2[8] = "giraffe";
	char *p3 = "dog";
	int i = 9;

	//printf("Real: %s\n", strncpy(p1, p3, i));
	printf("Mine: %s\n", ft_strncpy(p2, p3, i));

	return (0);
}
