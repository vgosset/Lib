/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 12:50:04 by vgosset           #+#    #+#             */
/*   Updated: 2016/03/14 13:05:26 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*set_larg(t_struct *form, char *str)
{
	char	*new;

	new = NULL;
	if (form->larg > (int)ft_strlen(str))
		new = place_s(form->larg - (int)ft_strlen(str), ' ');
	return (new);
}

void	set_s(t_struct *form, va_list va)
{
	char	*tab[3];

	tab[1] = NULL;
	tab[2] = va_arg(va, char *);
	if (tab[2] == NULL)
		tab[2] = ft_strdup("(null)");
	if (form->prec != -1 && form->prec < (int)ft_strlen(tab[2]))
		tab[0] = ft_strsub(tab[2], 0, form->prec);
	else
		tab[0] = ft_strdup(tab[2]);
	if (form->larg > (int)ft_strlen(tab[0]))
		tab[1] = set_larg(form, tab[0]);
	if (form->prec == -1 && form->larg != 0 && form->moins == 0)
		tab[2] = ft_strjoin(tab[1], tab[0]);
	else if (form->moins == 1)
		tab[2] = ft_strjoin(tab[0], tab[1]);
	else
		tab[2] = ft_strjoin(tab[1], tab[0]);
	tab[0] = ft_strdup(tab[2]);
	free(tab[1]);
	free(tab[2]);
	g_ret += ft_strlen(tab[0]);
	ft_putstr(tab[0]);
	free(tab[0]);
}
