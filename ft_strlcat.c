/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 13:20:48 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/09 11:31:41 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dst_len;

	i = 0;
	while (dst[i] && i < size)
		i++;
	dst_len = i;
	while (src[i - dst_len] && i < size - 1)
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	if (dst_len < size)
		dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}
