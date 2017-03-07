/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 22:31:48 by esterna           #+#    #+#             */
/*   Updated: 2017/03/03 19:36:09 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next_item;

	while (*alst)
	{
		next_item = (*alst)->next;
		(*del)((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = next_item;
	}
	*alst = NULL;
}
