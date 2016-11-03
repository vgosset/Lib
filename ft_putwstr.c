/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 13:00:00 by vgosset           #+#    #+#             */
/*   Updated: 2016/03/14 13:00:01 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putwstr(wchar_t *str)
{
	char	*bits;
	char	**mask;
	int		i;

	while (*str)
	{
		bits = ui_to_bits((unsigned int)*str);
		mask = uni_mask(bits);
		i = 0;
		while (mask && mask[i])
		{
			print_oct(mask[i]);
			free(mask[i]);
			i++;
		}
		free(bits);
		free(mask);
		str++;
	}
}
