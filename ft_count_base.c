/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 16:57:42 by vgosset           #+#    #+#             */
/*   Updated: 2016/05/10 16:57:47 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_base(unsigned long n, int base)
{
	int i;

	i = 0;
	while (n >= (unsigned int)base)
	{
		n = n / base;
		i++;
	}
	i++;
	return (i);
}
