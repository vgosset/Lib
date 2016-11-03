/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 15:44:28 by vgosset           #+#    #+#             */
/*   Updated: 2016/10/03 12:03:59 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	**ft_tabdup(char **tab)
{
	char **tab_f;
	int	i;

	i = 0;
	tab_f = (char **)malloc(sizeof(char *) * ft_tablen(tab) + 1);
	while (tab[i])
	{
		tab_f[i] = ft_strdup(tab[i]);
		i++;
	}
	tab_f[i] = NULL;
	return (tab_f);
}

