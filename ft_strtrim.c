/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:06:33 by vgosset           #+#    #+#             */
/*   Updated: 2016/01/04 15:43:25 by vgosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i;
	char		*str;
	size_t		j;
	size_t		len;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (i <= j && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (j >= i && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j--;
	len = j - i + 1;
	str = ft_strsub(s, i, len);
	return (str);
}
