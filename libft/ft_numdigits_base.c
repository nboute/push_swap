/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numdigits_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 18:32:32 by nboute            #+#    #+#             */
/*   Updated: 2017/01/18 18:41:01 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numdigits_base(const char *s, size_t base)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (base < 2 || base > 16 || !s)
		return (0);
	while (!ft_isdigit(s[i]) && s[i])
		i++;
	while ((ft_isdigit(s[i]) || (base > 10 && ft_tolower(s[i]) >= 'a'
				&& ft_tolower(s[i]) <= 'a' + (int)base - 10)) && s[i])
	{
		n++;
		i++;
	}
	return (n);
}
