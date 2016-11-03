/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:00:07 by vgosset           #+#    #+#             */
/*   Updated: 2016/01/04 16:00:02 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2_len;
	size_t	i;
	char	*ptr;

	s2_len = ft_strlen(s2);
	ptr = (char *)s1;
	if (ft_strlen(ptr) < s2_len)
		return (NULL);
	if (!s2)
		return (ptr);
	if (s2_len > n)
		return (NULL);
	i = n - s2_len + 1;
	while (i > 0)
	{
		if (ft_strncmp(ptr, s2, s2_len) == 0)
			return (ptr);
		ptr++;
		i--;
	}
	return (NULL);
}
