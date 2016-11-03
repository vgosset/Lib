/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_wchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 12:57:22 by vgosset           #+#    #+#             */
/*   Updated: 2016/03/14 12:57:25 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_wchar(unsigned int wchar)
{
	if (wchar < 128)
		return (1);
	else if (wchar < 2048)
		return (2);
	else if (wchar < 65536)
		return (3);
	else
		return (4);
}
