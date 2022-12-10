/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_algo_100.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:49:07 by obouhlel          #+#    #+#             */
/*   Updated: 2022/12/10 18:48:53 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algo_ps_20(t_list **lst, int min, int max)
{
	while (*lst)
	{
		
	}
}

void	ft_algo_ps_100(t_list **lst_a, t_list **lst_b, int min, int max)
{
	int		push;
	int		moy;

	push = 20;
	moy = ft_algo_moy(max, min);
	while (push)
	{
		if ((*lst_a)->value <= moy)
		{
			ft_push_swap_pb(lst_b, lst_a);
			moy = ft_algo_moy(ft_algo_max(*lst_a), ft_algo_min(*lst_a));
			ft_putstrnbr_fd("moy = ", moy, 1);
			push--;
		}
		else
			ft_push_swap_ra(lst_a);
	}
	ft_putstr_fd("\033[0;35m", 1);
	ft_lstprint_num_fd(*lst_b, 1);
}
