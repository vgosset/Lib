/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_display_block_d.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 12:52:10 by vgosset           #+#    #+#             */
/*   Updated: 2016/03/14 12:52:13 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long long	check_display_block_d_2(t_struct *form, va_list va)
{
	long long	p;

	if (form->h > 0)
		p = (short)va_arg(va, int);
	else if (form->z > 0)
		p = va_arg(va, intmax_t);
	else
		p = va_arg(va, int);
	return (p);
}

long long			check_display_block_d(t_struct *form, va_list va)
{
	long long	p;

	if (form->l > 0 || form->ll > 0 || form->type == 'D')
		p = va_arg(va, long long);
	else if (form->j > 0)
		p = va_arg(va, intmax_t);
	else if (form->hh > 0)
		p = (signed char)va_arg(va, int);
	else
		return (check_display_block_d_2(form, va));
	return (p);
}
