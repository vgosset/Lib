/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 17:26:23 by vgosset           #+#    #+#             */
/*   Updated: 2015/12/07 11:46:50 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] && s2[i] && ((unsigned char)s1[i]) == ((unsigned char)s2[i])
			&& i < n)
		i++;
	if (i == n)
		return (0);
	return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}
