/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:10:02 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/08 14:37:02 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *ptr;
	t_list *ptr2;

	ptr = *alst;
	while (ptr->next != NULL)
	{
		ptr2 = ptr->next;
		del(ptr->content, ptr->content_size);
		free(ptr);
		ptr = ptr2;
	}
	free(ptr);
	del(ptr->content, ptr->content_size);
	*alst = NULL;
}
