/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 14:13:22 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/08 16:14:41 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *ptr;

	if (!lst || !f)
		return (NULL);
	new = f(lst);
	if (new == NULL)
		return (NULL);
	lst = lst->next;
	ptr = new;
	while (lst != NULL)
	{
		ptr->next = f(lst);
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		lst = lst->next;
	}
	ptr->next = NULL;
	return (new);
}
