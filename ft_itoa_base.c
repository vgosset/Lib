/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 12:58:00 by vgosset           #+#    #+#             */
/*   Updated: 2016/03/14 12:58:02 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

char	*u_itoa_base(uintmax_t nbr, int base)
{
	char			*ret;
	int				size;

	ret = NULL;
	size = ft_count_base(nbr, base);
	if ((ret = (char *)malloc(sizeof(char) * size + 1)))
	{
		ret[size--] = '\0';
		while (size >= 0)
		{
			if (base > 10)
			{
				ret[size] = (nbr % base) >= 10 ?
				(nbr % base) - 10 + 'a' : (nbr % base) + '0';
			}
			else
				ret[size] = (nbr % base) + '0';
			nbr /= base;
			size--;
		}
	}
	return (ret);
}

char	*ft_itoa_base(intmax_t nbr, int base)
{
	char			*ret;
	int				size;
	int				is_neg;

	if (base != 10)
		return (u_itoa_base((uintmax_t)nbr, base));
	if (nbr == (-9223372036854775807 - 1))
		return (ft_strdup("-9223372036854775808"));
	ret = NULL;
	size = nbr < 0 ? 1 : 0;
	is_neg = nbr < 0 ? 1 : 0;
	nbr = nbr < 0 ? -nbr : nbr;
	size += ft_count(nbr);
	if ((ret = (char *)malloc(sizeof(char) * size + 1)))
	{
		ret[size--] = '\0';
		while (nbr >= 0 && size >= 0)
		{
			ret[size--] = (nbr % base) + '0';
			nbr /= base;
		}
		if (is_neg == 1)
			ret[++size] = '-';
	}
	return (ret);
}
