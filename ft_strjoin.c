/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 14:35:50 by vgosset           #+#    #+#             */
/*   Updated: 2016/10/05 15:21:14 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = ft_strnew((size_t)ft_strlen(s1) + (size_t)ft_strlen(s2) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = ((char *)s1)[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = ((char *)s2)[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
