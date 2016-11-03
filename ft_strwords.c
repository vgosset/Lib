/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwords.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 15:44:47 by vgosset           #+#    #+#             */
/*   Updated: 2016/01/04 16:02:22 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strwords(char const *str, char c)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i])
		{
			if (str[i + 1] == c || str[i + 1] == '\0')
				j++;
			i++;
		}
	}
	return (j);
}
