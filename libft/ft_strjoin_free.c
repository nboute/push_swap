/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 16:31:13 by nboute            #+#    #+#             */
/*   Updated: 2017/02/01 10:35:32 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin_free(char *s1, char *s2)
{
	size_t	n;
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	if (!s1 && s2)
	{
		str = ft_strdup(s2);
		ft_strdel(&s2);
		return (str);
	}
	if (!s2 && s1)
	{
		str = ft_strdup(s1);
		ft_strdel(&s1);
		return (str);
	}
	n = ft_strlen(s1) + ft_strlen(s2);
	if ((str = (char*)malloc(n + 1)) == NULL)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	ft_strdel(&s1);
	ft_strdel(&s2);
	return (str);
}
