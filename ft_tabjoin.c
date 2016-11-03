/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 14:27:49 by vgosset           #+#    #+#             */
/*   Updated: 2016/10/05 15:26:28 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_tabjoin(char **tab1, char **tab2)
{
	char **tab_f;
	int		j;
	int		i;
	int		k;

	k = 0;
	i = 0;
	j = (ft_tablen(tab1) + ft_tablen(tab2));
	if (!tab1 || !tab2)
		return (NULL);
	tab_f = (char **)malloc(sizeof(char *) * j + 1);
	while (tab1[i])
	{
		tab_f[i] = ft_strdup(tab1[i]);
		i++;
	}
	while (tab2[k])
	{
		tab_f[i] = ft_strdup(tab2[k]);
		i++;
		k++;
	}
	tab_f[i] = NULL;
	return (tab_f);
}
