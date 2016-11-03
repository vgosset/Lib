/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_display_block_o.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 12:52:47 by vgosset           #+#    #+#             */
/*   Updated: 2016/03/14 12:52:51 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

uintmax_t	check_display_block_o(t_struct *form, va_list va)
{
	uintmax_t	p;

	if (form->l > 0 || form->ll > 0 || form->type == 'O')
		p = va_arg(va, unsigned long);
	else if (form->j > 0)
		p = va_arg(va, uintmax_t);
	else if (form->hh > 0)
		p = (unsigned char)va_arg(va, unsigned int);
	else if (form->h > 0)
		p = (unsigned short)va_arg(va, unsigned int);
	else if (form->z > 0)
		p = va_arg(va, size_t);
	else
		p = va_arg(va, unsigned int);
	return (p);
}
