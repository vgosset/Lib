/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_display_block_p.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 12:52:23 by vgosset           #+#    #+#             */
/*   Updated: 2016/03/14 14:08:56 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long	check_display_block_p(va_list va)
{
	unsigned long	p;

	p = (unsigned long)va_arg(va, void *);
	return (p);
}
