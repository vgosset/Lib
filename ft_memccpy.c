/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:00:36 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/11 13:08:07 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;

	i = 0;
	ptr_d = dst;
	ptr_s = (unsigned char *)src;
	while (i < n)
	{
		ptr_d[i] = ptr_s[i];
		if (ptr_s[i] == (unsigned char)c)
			return (&ptr_d[i + 1]);
		i++;
	}
	return (NULL);
}
