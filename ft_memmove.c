/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:57:21 by vgosset           #+#    #+#             */
/*   Updated: 2016/01/04 15:57:47 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		cpt;

	cpt = 0;
	if (src == dst)
		return (dst);
	else if (src < dst)
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	else if (src > dst)
		while (cpt < len)
		{
			((char *)dst)[cpt] = ((char *)src)[cpt];
			cpt++;
		}
	return (dst);
}
