/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboute <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:26:24 by nboute            #+#    #+#             */
/*   Updated: 2017/01/19 15:29:49 by nboute           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "../libft/libft.h"

typedef struct		s_piles
{
	int				**pa;
	int				**pb;
	size_t			sa;
	size_t			sb;

}					t_piles;

#endif
