/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:51:51 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/11 11:44:38 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				i;
	unsigned int	j;
	int				m;
	char			*str;

	i = 0;
	m = ft_strlen(s);
	j = 0;
	str = (char *)malloc(sizeof(char) * m + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(j, s[i]);
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
