/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stric.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 13:57:41 by vgosset           #+#    #+#             */
/*   Updated: 2016/05/24 17:21:05 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_stric(char *str, char c, size_t n)
{
	size_t i;
	size_t cmpt;

	cmpt = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			cmpt++;
			if (cmpt == n)
				return (i + 1);
		}
		i++;
	}
	return (-1);
}
