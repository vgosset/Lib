/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:56:05 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/10 13:11:34 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;
	size_t res;

	i = 0;
	if (n == 0)
		return (1);
	while (s1[i] == s2[i] && s1[i] && s2[i] && n - 1 > i)
		i++;
	res = s1[i] - s2[i];
	if (res != 0)
		return (0);
	else
		return (1);
}
