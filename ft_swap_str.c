/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/03 18:21:30 by vgosset           #+#    #+#             */
/*   Updated: 2016/10/05 15:39:51 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_swap_str(char *str)
{
	int i;
	int j;
	char *str_f;

	str_f = NULL;
	i = 0;
	j = ft_strlen(str);
	str_f = (char *)malloc(sizeof(char) * j + 1);
	j--;
	while (str[i])
	{
		str_f[j] = str[i];
		i++;
		j--;
	}
	str_f[i] = '\0';
	return (str_f);
}

