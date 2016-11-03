/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 12:55:09 by vgosset           #+#    #+#             */
/*   Updated: 2016/03/14 13:06:33 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_type(const char format)
{
	if (format == 's' || format == 'S' || format == 'p'
		|| format == 'd' || format == 'D' || format == 'i'
		|| format == 'o' || format == 'O' || format == 'u'
		|| format == 'U' || format == 'x' || format == 'X'
		|| format == 'c' || format == 'C' || format == '%')
		return (1);
	else
		return (0);
}

int	check_block(char *block, t_struct *form)
{
	int	i;

	i = 0;
	form->block = block;
	if (form->type == 0)
		return (-1);
	if (form->block[ft_strlen(block)] != '\0')
		return (-1);
	free(block);
	return (1);
}
