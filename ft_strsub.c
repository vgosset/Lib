/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 14:07:07 by vgosset           #+#    #+#             */
/*   Updated: 2016/01/04 15:36:34 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*trc;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	j = 0;
	i = 0;
	trc = (char *)malloc(sizeof(char) * len + 1);
	if (trc == NULL)
		return (NULL);
	while (i != start)
		i++;
	while (j < len)
	{
		trc[j] = ((char *)s)[i];
		i++;
		j++;
	}
	trc[j] = '\0';
	return (trc);
}
