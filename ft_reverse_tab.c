/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 13:50:33 by vgosset           #+#    #+#             */
/*   Updated: 2016/10/05 14:04:50 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_reverse_tab(char **tab)
{
	char **tab_f;
	int i;
	int	j;

	i = 0;
	j = ft_tablen(tab);
	tab_f = (char **)malloc(sizeof(char *) * j + 1);
	j--;
	while (tab[i])
	{
		tab_f[j] = ft_strdup(tab[i]);
		i++;
		j--;
	}
	tab_f[i] = NULL;
	return (tab_f);
}
