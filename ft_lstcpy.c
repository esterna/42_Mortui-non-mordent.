/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:42:14 by esterna           #+#    #+#             */
/*   Updated: 2017/11/10 17:55:10 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstcpy(t_list *old)
{
	t_list		*new;
	t_list		*tmp;

	new = ft_lstnew(old->content, sizeof(old->content));
	old = old->next;
	while (old != NULL)
	{
		tmp = ft_lstnew(old->content, sizeof(old->content));
		ft_lstaddend(&new, tmp);
		old = old->next;	
	}
	return (new);
}
