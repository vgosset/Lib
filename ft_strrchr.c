/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 16:32:01 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/04 15:10:51 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int j;

	j = ft_strlen((char *)s);
	while (j >= 0 && s[j] != c)
		j--;
	if (s[j] == c)
		return ((char *)&s[j]);
	if (c == 0)
		return ((char *)&s[j]);
	return (NULL);
}
