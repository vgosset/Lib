/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:28:01 by vgosset           #+#    #+#             */
/*   Updated: 2016/08/17 16:12:11 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (((unsigned char)s1[i]) == ((unsigned char)s2[i]) && s1[i] && s2[i])
		i++;
	return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}
