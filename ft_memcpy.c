/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:54:32 by vgosset           #+#    #+#             */
/*   Updated: 2015/11/30 16:32:55 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_d;
	char	*ptr_s;

	ptr_s = (char *)src;
	ptr_d = (char *)dst;
	i = 0;
	while (i < n)
	{
		ptr_d[i] = ptr_s[i];
		i++;
	}
	return (dst);
}
