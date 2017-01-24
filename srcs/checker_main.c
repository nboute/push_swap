/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 20:00:38 by nboute            #+#    #+#             */
/*   Updated: 2017/01/19 20:03:42 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

void	ft_push_pile(int	**p1, int	**p2, size_t *s1, size_t *s2)
{
	int		*pdup1;
	int		*pdup2;
	size_t	i;

	if (!(*s2))
		return ;
	if (!(pdup1 = (int*)malloc(sizeof(int) * ++(*s1))))
		return ;
	if ((*s2) > 1)
		if (!(pdup2 = (int*)malloc(sizeof(int) * (*s2 - 1))))
			return ;
	pdup1[0] = (*p2)[0];
	ft_memcpy(pdup1 + 4, p1, (*s1) * sizeof(int));
	ft_memcpy(pdup2, *p2 + 4, --(*s2) * sizeof(int));
	if (*p1)
		free(*p1);
	if (*p2)
		free(*p2);
	*p1 = pdup1;
	*p2 = pdup2;
}

void	ft_rot_pile(int *p, size_t s)
{
	size_t	i;
	int		tmp;

	i = 0;
	if (!s)
		return ;
	tmp = p[0];
	while (i + 1 < s)
	{
		p[i] = p[i + 1];
		i++;
	}
	p[i] = tmp;
}

void	ft_revrot_pile(int *p, size_t s)
{
	int	tmp;

	s--;
	tmp = p[s];
	while (s - 1 > 0)
	{
		p[s] = p[s - 1];
		s--;
	}
	p[0] = tmp;
}

void	ft_swap_pile(int *tab, size_t size)
{
	int tmp;

	if (size <= 1)
		return ;
	tmp = tab[0];
	tab[0] = tab[1];
	tab[1] = tab[0];
}

int	main(int ac, char **av)
{
	int	*tab;

	
}
