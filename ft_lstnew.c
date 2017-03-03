/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 21:41:37 by esterna           #+#    #+#             */
/*   Updated: 2017/03/02 22:07:08 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;
	void *new_content;
	size_t new_size;

	new = (t_list *)malloc(sizeof(t_list));
	new_content = ft_memcpy(ft_memalloc(content_size),
			content, content_size);
	new_size = content_size;
	if (new == NULL)
		return (NULL);
	new->content = new_content;
	if (content == NULL)
		new->content_size = 0;
	else
		new->content_size = new_size;
	new->next = NULL;
	return (new);
}
