/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:52:45 by vgosset           #+#    #+#             */
/*   Updated: 2016/01/04 15:24:33 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	d;
	size_t			i;

	d = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == d)
			return (((void *)s) + i);
		i++;
	}
	return (NULL);
}
