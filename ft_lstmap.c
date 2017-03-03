/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 22:51:37 by esterna           #+#    #+#             */
/*   Updated: 2017/03/02 23:25:29 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *current;
	t_list *new_lst;
	t_list *tmp;

	current = lst;
	new_lst = (t_list *)malloc(sizeof(t_list) * ft_lstsize);
	tmp = new_lst;
	while (current)
	{
		tmp->next = (*f)(current);
		current = current->next;
		tmp = tmp->next;
	}
	return (new_lst);
}
